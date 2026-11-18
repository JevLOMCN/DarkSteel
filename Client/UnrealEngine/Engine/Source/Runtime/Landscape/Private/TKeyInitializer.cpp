// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// operator<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>_TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_> @ 145ef9260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<ALandscapeProxy_*_&&>::
operator<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>_TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<ALandscapeProxy_*_&&> *this,
          TTuple<ALandscapeProxy_*,TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>_>
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
  *(ALandscapeProxy **)__return_storage_ptr__ = *this->Key;
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>::
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
            ((TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>_TTuple<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_> @ 145f68410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>
* __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>_TTuple<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>
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
  *(uint *)__return_storage_ptr__ = *this->Key;
  TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
  ::
  TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
            ((TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

