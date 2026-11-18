// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// operator<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>_TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_> @ 141723540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>_TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>::
  TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>
            ((TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_> @ 141723660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>::
  TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>
            ((TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_> @ 1417238f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
* __thiscall
TKeyInitializer<FTextKey_&&>::
operator<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
          (TKeyInitializer<FTextKey_&&> *this,
          TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = this->Key->Index;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_> @ 141723a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
* __thiscall
TKeyInitializer<FTextKey_const_&>::
operator<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
          (TKeyInitializer<FTextKey_const_&> *this,
          TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = this->Key->Index;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>_TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_> @ 141723b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>
* __thiscall
TKeyInitializer<FTextKey_&&>::
operator<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>_TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>
          (TKeyInitializer<FTextKey_&&> *this,
          TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  *(int *)__return_storage_ptr__ = this->Key->Index;
  TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
  ::
  TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
            ((TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo> @ 141723cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo> * __thiscall
TKeyInitializer<enum_ELocalizedTextSourceCategory_&&>::
operator<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>
          (void *this,
          TTuple<ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [24];
  undefined8 uStack_a0;
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_80;
  ulonglong local_70;
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_8c = 0x80;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_80.InlineData[0] = '\0';
  local_80.InlineData[1] = '\0';
  local_80.InlineData[2] = '\0';
  local_80.InlineData[3] = '\0';
  local_80._padding_ = 0;
  local_70 = 0;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_20 = 0;
  local_b8._16_8_ = 0;
  uStack_a0 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_80.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)local_b8);
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x58,
             (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  local_70 = local_70 & 0xffffffff00000000;
  if (local_80.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,0,local_b8._8_4_);
  iVar1 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_> @ 14180ebb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_> *
__thiscall
TKeyInitializer<FString_const_&>::
operator<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_28;
  
  local_28._padding_ = 0;
  local_28.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
  local_28._24_8_ = _UNK_150631d48;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x10,&local_28);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_28.InvocationList.AllocatorInstance.Data,local_28.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_28.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_28.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  return __return_storage_ptr__;
}

// operator<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>_TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_> @ 1418446a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>_TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TSet<TTuple<FName,FConfigSection>,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,FConfigSection>,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FConfigSection>,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,FConfigSection>,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x108,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 1418447d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,FConfigSection>_TTuple<FName,FConfigSection> @ 141844930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FConfigSection> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FConfigSection>_TTuple<FName,FConfigSection>
          (TKeyInitializer<FName_const_&> *this,TTuple<FName,FConfigSection> *__return_storage_ptr__
          )

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [32];
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  void *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  bool local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_28 = true;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  FConfigSection::FConfigSection
            ((FConfigSection *)&__return_storage_ptr__->field_0x8,(FConfigSection *)local_118);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  uVar3 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar1 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_118,0,local_118._8_4_);
  iVar1 = SUB84(local_118._8_8_,4);
  local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
  }
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_f0 = 0;
  if (0x80 < local_ec) {
    local_ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,FConfigModificationTracker::FCVarTracker>_TTuple<FString,FConfigModificationTracker::FCVarTracker> @ 141844bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,FConfigModificationTracker::FCVarTracker> * __thiscall
TKeyInitializer<FString_&&>::
operator<FString,FConfigModificationTracker::FCVarTracker>_TTuple<FString,FConfigModificationTracker::FCVarTracker>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,FConfigModificationTracker::FCVarTracker> *__return_storage_ptr__)

{
  FString *pFVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_a8 [32];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pFVar1 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_38.InlineData[0] = '\0';
  local_38.InlineData[1] = '\0';
  local_38.InlineData[2] = '\0';
  local_38.InlineData[3] = '\0';
  local_38._padding_ = 0;
  local_48 = 0x8000000000;
  auStack_70._0_8_ = (FScriptContainerElement *)0x0;
  auStack_70._8_8_ = 0;
  auStack_70._16_8_ = 0;
  uStack_40 = 0xffffffff;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TSet<TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x18,
             (TSet<TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>,FDefaultSetAllocator>
              *)auStack_70);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_70,0,auStack_70._8_4_);
  iVar2 = SUB84(auStack_70._8_8_,4);
  auStack_70._8_8_ = auStack_70._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)auStack_70,0,(int *)(auStack_70 + 0xc));
  }
  uVar3 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_70 + 0x10),0);
  }
  if (pvStack_50 != (void *)0x0) {
    FMemory::Free(pvStack_50);
  }
  if ((FScriptContainerElement *)auStack_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_70._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_> @ 141844e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
* __thiscall
TKeyInitializer<FString_&&>::
operator<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
          *__return_storage_ptr__)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar1 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_>_TTuple<FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_> @ 141844fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_>
* __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_>_TTuple<FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,FArchiveCountConfigMem>_TTuple<FString,FArchiveCountConfigMem> @ 1418450e0

TTuple<FString,FArchiveCountConfigMem> * __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,FArchiveCountConfigMem>_TTuple<FString,FArchiveCountConfigMem>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,FArchiveCountConfigMem> *__return_storage_ptr__)

{
  FArchiveState local_a8;
  undefined8 local_18;
  undefined8 local_10;
  
  FArchiveState::FArchiveState(&local_a8);
  local_a8.ArIsCountingMemory = '\x01';
  local_18 = 0;
  local_10 = 0;
  local_a8._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  FArchiveState::FArchiveState((FArchiveState *)&__return_storage_ptr__->field_0x10,&local_a8);
  *(undefined8 *)&__return_storage_ptr__->field_0xa0 = local_18;
  *(undefined8 *)&__return_storage_ptr__->field_0xa8 = local_10;
  *(undefined ***)&__return_storage_ptr__->field_0x10 = &___7FArchiveCountConfigMem__6B_;
  FArchive::~FArchive((FArchive *)&local_a8);
  return __return_storage_ptr__;
}

// operator<FString,FConfigCommandStreamSection>_TTuple<FString,FConfigCommandStreamSection> @ 141845190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,FConfigCommandStreamSection> * __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,FConfigCommandStreamSection>_TTuple<FString,FConfigCommandStreamSection>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,FConfigCommandStreamSection> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_90;
  ulonglong local_80;
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_90.InlineData[0] = '\0';
  local_90.InlineData[1] = '\0';
  local_90.InlineData[2] = '\0';
  local_90.InlineData[3] = '\0';
  local_90._padding_ = 0;
  local_c8._16_8_ = 0;
  uStack_b0 = 0;
  local_80 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  local_30 = 0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_90.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)local_c8);
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x60,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  local_80 = local_80 & 0xffffffff00000000;
  if (local_90.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_90.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar1 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>_TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_> @ 1418a9d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>_TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  uint uVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_28;
  
  local_28._padding_ = 0;
  local_28.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
  local_28._24_8_ = _UNK_150631d48;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_28);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_28.InvocationList.AllocatorInstance.Data,local_28.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_28.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_28.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  return __return_storage_ptr__;
}

// operator<FName,FLoadTimeTracker::FAccumulatorTracker>_TTuple<FName,FLoadTimeTracker::FAccumulatorTracker> @ 14197e050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FLoadTimeTracker::FAccumulatorTracker> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FLoadTimeTracker::FAccumulatorTracker>_TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FLoadTimeTracker::FAccumulatorTracker> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  FLoadTimeTracker::FAccumulatorTracker::FAccumulatorTracker
            ((FAccumulatorTracker *)&__return_storage_ptr__->field_0x8,
             (FAccumulatorTracker *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,FBudgetData>_TTuple<FName,FBudgetData> @ 1419b52f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FBudgetData> * __thiscall
TKeyInitializer<FName_&&>::operator<FName,FBudgetData>_TTuple<FName,FBudgetData>
          (TKeyInitializer<FName_&&> *this,TTuple<FName,FBudgetData> *__return_storage_ptr__)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [16];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_80;
  ulonglong local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8.MaxBits = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_80.InlineData[0] = '\0';
  local_80.InlineData[1] = '\0';
  local_80.InlineData[2] = '\0';
  local_80.InlineData[3] = '\0';
  local_80._padding_ = 0;
  local_70 = 0;
  local_30 = 0;
  local_20 = 0;
  local_a8.AllocatorInstance.InlineData[0] = '\0';
  local_a8.AllocatorInstance.InlineData[1] = '\0';
  local_a8.AllocatorInstance.InlineData[2] = '\0';
  local_a8.AllocatorInstance.InlineData[3] = '\0';
  local_a8.AllocatorInstance.InlineData[4] = '\0';
  local_a8.AllocatorInstance.InlineData[5] = '\0';
  local_a8.AllocatorInstance.InlineData[6] = '\0';
  local_a8.AllocatorInstance.InlineData[7] = '\0';
  local_a8.AllocatorInstance.InlineData[8] = '\0';
  local_a8.AllocatorInstance.InlineData[9] = '\0';
  local_a8.AllocatorInstance.InlineData[10] = '\0';
  local_a8.AllocatorInstance.InlineData[0xb] = '\0';
  local_a8.AllocatorInstance.InlineData[0xc] = '\0';
  local_a8.AllocatorInstance.InlineData[0xd] = '\0';
  local_a8.AllocatorInstance.InlineData[0xe] = '\0';
  local_a8.AllocatorInstance.InlineData[0xf] = '\0';
  local_58.AllocatorInstance.InlineData[0] = '\0';
  local_58.AllocatorInstance.InlineData[1] = '\0';
  local_58.AllocatorInstance.InlineData[2] = '\0';
  local_58.AllocatorInstance.InlineData[3] = '\0';
  local_58.AllocatorInstance.InlineData[4] = '\0';
  local_58.AllocatorInstance.InlineData[5] = '\0';
  local_58.AllocatorInstance.InlineData[6] = '\0';
  local_58.AllocatorInstance.InlineData[7] = '\0';
  local_58.AllocatorInstance.InlineData[8] = '\0';
  local_58.AllocatorInstance.InlineData[9] = '\0';
  local_58.AllocatorInstance.InlineData[10] = '\0';
  local_58.AllocatorInstance.InlineData[0xb] = '\0';
  local_58.AllocatorInstance.InlineData[0xc] = '\0';
  local_58.AllocatorInstance.InlineData[0xd] = '\0';
  local_58.AllocatorInstance.InlineData[0xe] = '\0';
  local_58.AllocatorInstance.InlineData[0xf] = '\0';
  local_c8._8_4_ = 0;
  local_c8._12_4_ = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.NumBits = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_80.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_58.MaxBits = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FBudgetData::FBudgetData
            ((FBudgetData *)&__return_storage_ptr__->field_0x8,(FBudgetData *)local_c8);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  local_70 = local_70 & 0xffffffff00000000;
  if (local_80.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.SecondaryData);
  }
  uVar2 = local_b0 >> 0x20;
  local_b0 = local_b0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_b8,0,(int *)((longlong)&local_b0 + 4));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_a8.NumBits = 0;
  if (0x80 < (uint)local_a8.MaxBits) {
    local_a8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<FString,int>((FString *)local_c8._0_8_,local_c8._8_4_);
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>_TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_> @ 1419b5590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>_TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>::
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
            ((TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<__int64,FHudFrame>_TTuple<__int64,FHudFrame> @ 1419b56b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<__int64,FHudFrame> * __thiscall
TKeyInitializer<__int64_const_&>::operator<__int64,FHudFrame>_TTuple<__int64,FHudFrame>
          (TKeyInitializer<__int64_const_&> *this,TTuple<__int64,FHudFrame> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [128];
  void *local_78;
  undefined4 local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  memset(local_f8 + 0x30,0,0xb0);
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_4_ = 0;
  local_f8._12_4_ = 0;
  local_f8._16_8_ = (FScriptContainerElement *)0x0;
  local_f8._24_4_ = 0;
  local_f8._28_4_ = 0;
  local_f8._32_8_ = (FScriptContainerElement *)0x0;
  local_f8._40_4_ = 0;
  local_f8._44_4_ = 0;
  FRawStatStackNode::FRawStatStackNode((FRawStatStackNode *)(local_f8 + 0x30));
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = ___xmm_00000000ffffffff0000008000000000;
  uStack_38 = _UNK_150631d98;
  local_28 = (void *)0x0;
  local_20 = 0;
  *(long64 *)__return_storage_ptr__ = *this->Key;
  FHudFrame::FHudFrame((FHudFrame *)&__return_storage_ptr__->field_0x8,(FHudFrame *)local_f8);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  uVar2 = local_40._4_4_;
  uStack_38 = 0xffffffff;
  local_40 = (ulonglong)local_40._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_40 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  FRawStatStackNode::DeleteAllChildrenNodes((FRawStatStackNode *)(local_f8 + 0x30));
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_f8 + 0x40));
  if ((FScriptContainerElement *)local_f8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._32_8_);
  }
  if ((FScriptContainerElement *)local_f8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._16_8_);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return __return_storage_ptr__;
}

