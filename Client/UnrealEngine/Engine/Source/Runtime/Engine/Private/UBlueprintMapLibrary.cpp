// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 147674ad0

UClass * __cdecl UBlueprintMapLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintMapLibrary",
               &Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintMapLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintMapLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintMapLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton;
}

// UBlueprintMapLibrary @ 147688870

UBlueprintMapLibrary * __thiscall
UBlueprintMapLibrary::UBlueprintMapLibrary(UBlueprintMapLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintMapLibrary__6B_;
  return this;
}

// UBlueprintMapLibrary @ 1476888a0

UBlueprintMapLibrary * __thiscall
UBlueprintMapLibrary::UBlueprintMapLibrary(UBlueprintMapLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintMapLibrary__6B_;
  return this;
}

// ~UBlueprintMapLibrary @ 14768a920

void __thiscall UBlueprintMapLibrary::~UBlueprintMapLibrary(UBlueprintMapLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenericMap_Add @ 1476aa920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintMapLibrary::GenericMap_Add
          (void *param_1,FMapProperty *param_2,void *param_3,void *param_4)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  uchar *puVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_198 [32];
  FString local_158;
  FProperty *local_148;
  FProperty *local_140;
  FString local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  code *local_108;
  code **local_100;
  code *local_f8;
  code **local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  FScriptMapHelper local_c8;
  code *local_90;
  FProperty **local_88;
  code *local_80;
  FProperty **local_78;
  FScriptMapLayout local_70;
  code *local_58;
  FString *local_50;
  code *local_48;
  FString *local_40;
  FScriptMapLayout local_38;
  ulonglong local_20;
  
  if (param_1 != (void *)0x0) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_198;
    FScriptMapHelper::FScriptMapHelper(&local_c8,param_2,param_1);
    if ((local_c8.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar1 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                *)&(local_c8.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
    }
    else {
      iVar1 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                          *)&(local_c8.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                       AllocatorInstance.SecondaryData.field_0x4;
    }
    if ((((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
           *)&(local_c8.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar1 < 0x7fffffff) {
      local_70.ValueOffset = local_c8.MapLayout.ValueOffset;
      local_70.SetLayout.HashNextIdOffset = local_c8.MapLayout.SetLayout.HashNextIdOffset;
      local_70.SetLayout.HashIndexOffset = local_c8.MapLayout.SetLayout.HashIndexOffset;
      local_70.SetLayout.Size = local_c8.MapLayout.SetLayout.Size;
      local_148 = local_c8.KeyProp;
      local_38.ValueOffset = local_c8.MapLayout.ValueOffset;
      local_38.SetLayout.HashNextIdOffset = local_c8.MapLayout.SetLayout.HashNextIdOffset;
      local_38.SetLayout.HashIndexOffset = local_c8.MapLayout.SetLayout.HashIndexOffset;
      local_38.SetLayout.Size = local_c8.MapLayout.SetLayout.Size;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_c8.KeyProp;
      local_70.SetLayout.SparseArrayLayout = local_c8.MapLayout.SetLayout.SparseArrayLayout;
      local_38.SetLayout.SparseArrayLayout = local_c8.MapLayout.SetLayout.SparseArrayLayout;
      if ((local_c8.MapFlags & UsesMemoryImageAllocator) == None) {
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_c8.ValueProp;
        local_e8._0_8_ = local_c8.ValueProp;
        local_d8._0_8_ = local_c8.KeyProp;
        local_58 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_6>,void,void_*>
                   ::Call;
        local_50 = &local_158;
        local_140 = local_c8.KeyProp;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_7>,void,void_*>
                   ::Call;
        local_40 = &local_138;
        local_f0 = &local_58;
        local_f8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_2>,void,void_*>
                   ::Call;
        local_90 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*>
                   ::Call;
        local_88 = (FProperty **)local_d8;
        local_80 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_4>,void,void_*>
                   ::Call;
        local_78 = (FProperty **)local_e8;
        local_100 = &local_90;
        local_108 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_1>,void,void_*>
                    ::Call;
        local_118._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
        local_118._8_8_ = &local_140;
        local_128._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
        local_128._8_8_ = &local_148;
        local_e8._8_8_ = param_4;
        local_d8._8_8_ = param_3;
        TScriptSparseSet<FDefaultSetAllocator>::Add
                  ((TScriptSparseSet<FDefaultSetAllocator> *)local_c8.field2_0x10.HeapMap,param_3,
                   &local_c8.MapLayout.SetLayout,
                   (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_128,
                   (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)local_118,
                   (TFunctionRef<void___cdecl(void_*)> *)&local_108,
                   (TFunctionRef<void___cdecl(void_*)> *)&local_f8);
      }
      else {
        local_140 = local_c8.ValueProp;
        local_118._0_8_ = local_c8.ValueProp;
        local_128._0_8_ = local_c8.KeyProp;
        local_90 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_6>,void,void_*>
                   ::Call;
        local_88 = &local_148;
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_c8.KeyProp;
        local_80 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_7>,void,void_*>
                   ::Call;
        local_78 = &local_140;
        local_100 = &local_90;
        local_108 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_2>,void,void_*>
                    ::Call;
        local_58 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*>
                   ::Call;
        local_50 = (FString *)local_128;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_4>,void,void_*>
                   ::Call;
        local_40 = (FString *)local_118;
        local_f0 = &local_58;
        local_f8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_1>,void,void_*>
                   ::Call;
        local_e8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
        local_e8._8_8_ = &local_138;
        local_d8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
        local_d8._8_8_ = &local_158;
        local_128._8_8_ = param_3;
        local_118._8_8_ = param_4;
        TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
        ::Add((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
               *)local_c8.field2_0x10.HeapMap,param_3,&local_c8.MapLayout.SetLayout,
              (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_d8,
              (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)local_e8,
              (TFunctionRef<void___cdecl(void_*)> *)&local_f8,
              (TFunctionRef<void___cdecl(void_*)> *)&local_108);
      }
    }
    else {
      puVar4 = FScriptMapHelper::FindValueFromHash(&local_c8,param_3);
      FVar2 = UKismetArrayLibrary::ReachedMaximumContainerSizeWarning;
      if (puVar4 == (uchar *)0x0) {
        bVar3 = IsThisNotNull(param_2,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)&param_2->_padding_,&local_158);
        }
        else {
          ::FString::FString(&local_158,L"None");
        }
        ::FString::PrintfImpl
                  (&local_138,L"Attempted add to map \'%s\' beyond the maximum supported capacity!")
        ;
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_138.Data.ArrayNum != 0) {
          FVar5.Data = local_138.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Warning,FVar2);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// GenericMap_Clear @ 1476aac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UBlueprintMapLibrary::GenericMap_Clear(void *param_1,FMapProperty *param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  <lambda_1> local_58;
  FScriptMapHelper local_48;
  ulonglong local_10;
  
  if (param_1 != (void *)0x0) {
    local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
    FScriptMapHelper::FScriptMapHelper(&local_48,param_2,param_1);
    if ((local_48.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar1 = *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
    }
    else {
      iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
    }
    iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar1;
    if (iVar1 != 0) {
      FScriptMapHelper::DestructItems(&local_48,0,iVar1);
      local_58.__this = &local_48;
      local_58.Slack = 0;
      FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                (&local_48,&local_58);
    }
  }
  return;
}

// GenericMap_Find @ 1476aad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UBlueprintMapLibrary::GenericMap_Find
          (void *param_1,FMapProperty *param_2,void *param_3,void *param_4)

{
  FProperty *pFVar1;
  uchar *puVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  FScriptMapHelper local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (param_1 == (void *)0x0) {
    bVar3 = false;
  }
  else {
    FScriptMapHelper::FScriptMapHelper(&local_58,param_2,param_1);
    if ((local_58.MapFlags & UsesMemoryImageAllocator) == None) {
      local_78._0_8_ = local_58.KeyProp;
      local_88._8_8_ = local_78;
      local_68._0_8_ = local_58.KeyProp;
      local_98._8_8_ = local_68;
      local_88._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
           ::Call;
      local_98._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
           ::Call;
      puVar2 = TScriptMap<FDefaultSetAllocator,FScriptMap>::FindValue
                         ((TScriptMap<FDefaultSetAllocator,FScriptMap> *)
                          local_58.field2_0x10.HeapMap,param_3,&local_58.MapLayout,
                          (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_98,
                          (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)local_88);
    }
    else {
      local_98._0_8_ = local_58.KeyProp;
      local_68._8_8_ = local_98;
      local_88._0_8_ = local_58.KeyProp;
      local_78._8_8_ = local_88;
      local_68._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
           ::Call;
      local_78._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
           ::Call;
      puVar2 = TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
               ::FindValue(local_58.field2_0x10.FreezableMap,param_3,&local_58.MapLayout,
                           (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_78,
                           (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)local_68);
    }
    if (param_4 != (void *)0x0) {
      pFVar1 = param_2->ValueProp;
      if (puVar2 != (uchar *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x128))(pFVar1,param_4,puVar2);
        return puVar2 != (uchar *)0x0;
      }
      UE::BlueprintPropertyHelpers::ResetToDefault(param_4,pFVar1);
    }
    bVar3 = puVar2 != (uchar *)0x0;
  }
  return bVar3;
}

// GenericMap_GetKeyValueByIndex @ 1476aae40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintMapLibrary::GenericMap_GetKeyValueByIndex
          (void *param_1,FMapProperty *param_2,int param_3,void *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FName FVar5;
  FScriptMapHelper *pFVar6;
  undefined8 uVar7;
  bool bVar8;
  FScriptMapHelper_u_16 FVar9;
  uchar *puVar10;
  FName *pFVar11;
  FString *pFVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  undefined1 auStack_108 [32];
  int local_e8;
  FScriptContainerElement *local_e0;
  int local_d8 [4];
  TScriptContainerIterator<FScriptMapHelper> local_c8;
  FFieldObjectUnion local_b8;
  FString local_b0;
  FName local_a0;
  FString local_98;
  FScriptMapHelper local_88;
  ulonglong local_50;
  
  if (param_1 != (void *)0x0) {
    local_50 = __security_cookie.value ^ (ulonglong)auStack_108;
    local_b8.Field = param_5;
    local_a0 = (FName)param_4;
    FScriptMapHelper::FScriptMapHelper(&local_88,param_2,param_1);
    local_c8.Container = &local_88;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2->ValueProp;
    iVar13 = -1;
    pFVar3 = param_2->KeyProp;
    iVar14 = -1;
    iVar1 = ((local_88.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
    if ((local_88.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar2 = *(int *)&((local_88.field2_0x10.FreezableMap)->Pairs).field_0x34;
    }
    else {
      iVar2 = ((local_88.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
    }
    FVar9 = local_88.field2_0x10;
    if (iVar1 == iVar1 - iVar2) {
      local_c8.LogicalIndex = param_3;
      local_c8.InternalIndex = param_3;
      iVar13 = param_3;
    }
    else {
      do {
        iVar13 = iVar13 + 1;
        local_c8.InternalIndex = iVar13;
        iVar2 = ((FVar9.FreezableMap)->Pairs).Elements.Data.ArrayNum;
        while ((iVar13 < iVar2 &&
               (local_d8[0] = iVar13,
               bVar8 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_88,(<lambda_1> *)local_d8), FVar9 = local_88.field2_0x10,
               !bVar8))) {
          iVar13 = iVar13 + 1;
          local_c8.InternalIndex = iVar13;
        }
        iVar14 = iVar14 + 1;
      } while ((iVar14 < param_3) && (iVar13 < iVar1));
      local_c8.LogicalIndex = iVar14;
    }
    FVar15.Data = local_b0.Data.AllocatorInstance.Data;
    local_d8[0] = iVar13;
    bVar8 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (&local_88,(<lambda_1> *)local_d8);
    uVar7 = local_c8._8_8_;
    pFVar6 = local_c8.Container;
    if (bVar8) {
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x100);
      puVar10 = FScriptMapHelper::GetKeyPtr(&local_88,&local_c8);
      (*pcVar4)(pFVar3,local_a0,puVar10);
      pcVar4 = *(code **)(*(longlong *)FVar15.Data + 0x100);
      local_c8.Container = pFVar6;
      local_c8._8_8_ = uVar7;
      puVar10 = FScriptMapHelper::GetValuePtr(&local_88,&local_c8);
      (*pcVar4)(FVar15.Data,local_b8.Field,puVar10);
    }
    else {
      pFVar11 = ::FName::FName(&local_a0,L"GetOutOfBoundsWarning");
      local_b8 = (FFieldObjectUnion)param_2->_padding_;
      FVar5 = *pFVar11;
      if ((((local_b8.Unknown & 1) != 0) &&
          ((UObject *)(local_b8.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)(local_b8.Unknown & 0xfffffffffffffffe));
      }
      pFVar12 = FFieldVariant::GetPathName((FFieldVariant *)&local_b8,&local_98);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      iVar1 = ((local_88.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      if ((local_88.MapFlags & UsesMemoryImageAllocator) == None) {
        iVar13 = *(int *)&((local_88.field2_0x10.FreezableMap)->Pairs).field_0x34;
      }
      else {
        iVar13 = ((local_88.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
      }
      bVar8 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar8) {
        ::FName::ToString((FName *)&param_2->_padding_,(FString *)&local_c8);
      }
      else {
        ::FString::FString((FString *)&local_c8,L"None");
      }
      local_e8 = iVar1 - iVar13;
      local_e0 = (FScriptContainerElement *)pwVar16;
      ::FString::PrintfImpl
                (&local_b0,L"Attempted to access index %d from map \'%s\' of length %d in \'%s\'!");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_b0.Data.ArrayNum != 0) {
        FVar15.Data = local_b0.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar15.Data,Warning,FVar5);
      if ((FProperty *)local_b0.Data.AllocatorInstance.Data != (FProperty *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_c8.Container != (FScriptMapHelper *)0x0) {
        FMemory::Free(local_c8.Container);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GenericMap_GetLastIndex @ 1476ab100

int __cdecl UBlueprintMapLibrary::GenericMap_GetLastIndex(void *param_1,FMapProperty *param_2)

{
  int iVar1;
  FScriptMapHelper local_48;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  FScriptMapHelper::FScriptMapHelper(&local_48,param_2,param_1);
  iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if ((local_48.MapFlags & UsesMemoryImageAllocator) != None) {
    return (iVar1 - ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices) + -1;
  }
  return (iVar1 - *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34) + -1;
}

// GenericMap_IsEmpty @ 1476ab150

bool __cdecl UBlueprintMapLibrary::GenericMap_IsEmpty(void *param_1,FMapProperty *param_2)

{
  int iVar1;
  FScriptMapHelper local_48;
  
  if (param_1 == (void *)0x0) {
    return true;
  }
  FScriptMapHelper::FScriptMapHelper(&local_48,param_2,param_1);
  iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if ((local_48.MapFlags & UsesMemoryImageAllocator) != None) {
    return iVar1 == ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  return iVar1 == *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
}

// GenericMap_IsNotEmpty @ 1476ab1a0

bool __cdecl UBlueprintMapLibrary::GenericMap_IsNotEmpty(void *param_1,FMapProperty *param_2)

{
  int iVar1;
  FScriptMapHelper local_48;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  FScriptMapHelper::FScriptMapHelper(&local_48,param_2,param_1);
  iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if ((local_48.MapFlags & UsesMemoryImageAllocator) != None) {
    return 0 < iVar1 - ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  return 0 < iVar1 - *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
}

// GenericMap_Keys @ 1476ab1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintMapLibrary::GenericMap_Keys
          (void *param_1,FMapProperty *param_2,void *param_3,FArrayProperty *param_4)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  uchar *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStackY_f8 [32];
  int local_c8 [2];
  FScriptArrayHelper local_c0;
  int local_a0;
  int local_9c;
  FScriptMapHelper *local_98;
  int iStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  TScriptContainerIterator<FScriptMapHelper> local_78;
  FScriptMapHelper local_68;
  ulonglong local_30;
  
  if ((param_1 != (void *)0x0) &&
     (local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8, param_3 != (void *)0x0)) {
    plVar5 = (longlong *)(**(code **)(param_4->Inner->_padding_ + 0x158))(param_4->Inner,local_88);
    plVar6 = (longlong *)(**(code **)(param_2->KeyProp->_padding_ + 0x158))();
    if (*plVar6 == *plVar5) {
      FScriptMapHelper::FScriptMapHelper(&local_68,param_2,param_1);
      EVar1 = param_4->ArrayFlags;
      local_c0.ElementAlignment = (**(code **)(param_4->Inner->_padding_ + 0x168))();
      local_c0.InnerProperty = param_4->Inner;
      local_c0.ElementSize = (local_c0.InnerProperty)->ElementSize;
      local_c0.field1_0x8 = (FScriptArrayHelper_u_8)param_3;
      local_c0.ArrayFlags = EVar1;
      if ((local_c0.ElementSize < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_c0.InnerProperty == (FProperty *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_c0.field1_0x8.FreezableArray)->ArrayNum != 0) {
        FScriptArrayHelper::DestructItems
                  (&local_c0,0,(local_c0.field1_0x8.FreezableArray)->ArrayNum);
        (local_c0.field1_0x8.FreezableArray)->ArrayNum = 0;
        if ((local_c0.ArrayFlags & UsesMemoryImageAllocator) == None) {
          if ((local_c0.field1_0x8.FreezableArray)->ArrayMax != 0) {
            TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                      ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                       local_c0.field1_0x8.HeapArray,0,local_c0.ElementSize,
                       local_c0.ElementAlignment);
          }
        }
        else if ((local_c0.field1_0x8.FreezableArray)->ArrayMax != 0) {
          TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                    (local_c0.field1_0x8.FreezableArray,0,local_c0.ElementSize,
                     local_c0.ElementAlignment);
        }
      }
      pFVar2 = param_4->Inner;
      local_98 = &local_68;
      iVar10 = 0;
      iStack_90 = 0;
      iVar11 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      iVar12 = iStack_90;
      if (0 < iVar11) {
        do {
          local_a0 = iVar10;
          bVar4 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_68,(<lambda_1> *)&local_a0);
          iVar12 = iVar10;
          if (bVar4) break;
          iVar10 = iVar10 + 1;
          iVar12 = iVar10;
        } while (iVar10 < iVar11);
      }
      iStack_90 = iVar12;
      iVar11 = iStack_90;
      iVar12 = 0;
      iStack_8c = 0;
      local_c8[0] = iStack_90;
      bVar4 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_68,(<lambda_1> *)local_c8);
      if (bVar4) {
        do {
          iVar10 = FScriptArrayHelper::AddValues(&local_c0,1);
          local_78.LogicalIndex = iStack_8c;
          local_78.InternalIndex = iStack_90;
          local_78.Container = local_98;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x100);
          puVar7 = FScriptMapHelper::GetKeyPtr(&local_68,&local_78);
          if ((local_c0.field1_0x8.FreezableArray)->ArrayNum == 0) {
            lVar9 = 0;
          }
          else {
            uVar8 = (local_c0.field1_0x8.FreezableArray)->_padding_;
            if (((local_c0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
              uVar8 = (longlong)&(local_c0.field1_0x8.HeapArray)->field_0x0 +
                      ((longlong)uVar8 >> 0x18);
            }
            lVar9 = (longlong)local_c0.ElementSize * (longlong)iVar10 + uVar8;
          }
          (*pcVar3)(pFVar2,lVar9,puVar7);
          iVar11 = iVar11 + 1;
          iVar10 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
          iStack_90 = iVar11;
          while ((iVar11 < iVar10 &&
                 (local_9c = iVar11,
                 bVar4 = FScriptMapHelper::
                         WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                   (&local_68,(<lambda_1> *)&local_9c), !bVar4))) {
            iVar11 = iVar11 + 1;
          }
          iVar12 = iVar12 + 1;
          local_c8[0] = iVar11;
          iStack_90 = iVar11;
          iStack_8c = iVar12;
          bVar4 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_68,(<lambda_1> *)local_c8);
        } while (bVar4);
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3783263642519076805>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintMapLibrary.cpp"
                         ,0x3b,"MapProperty->KeyProp->GetID() == ArrayProperty->Inner->GetID()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// GenericMap_Length @ 1476ab4d0

int __cdecl UBlueprintMapLibrary::GenericMap_Length(void *param_1,FMapProperty *param_2)

{
  int iVar1;
  FScriptMapHelper local_48;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  FScriptMapHelper::FScriptMapHelper(&local_48,param_2,param_1);
  iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if ((local_48.MapFlags & UsesMemoryImageAllocator) != None) {
    return iVar1 - ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  return iVar1 - *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
}

// GenericMap_Remove @ 1476ab520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UBlueprintMapLibrary::GenericMap_Remove(void *param_1,FMapProperty *param_2,void *param_3)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  FScriptMapHelper *local_68;
  void *local_60;
  FProperty *local_58;
  FScriptMapHelper local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1 == (void *)0x0) {
    bVar1 = false;
  }
  else {
    FScriptMapHelper::FScriptMapHelper(&local_50,param_2,param_1);
    local_68 = &local_50;
    local_58 = local_50.KeyProp;
    local_60 = param_3;
    bVar1 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::RemovePair_::__l2::<lambda_1>_>
                      (&local_50,(<lambda_1> *)&local_68);
  }
  return bVar1;
}

// GenericMap_SetMapPropertyByName @ 1476ab5a0

void __cdecl
UBlueprintMapLibrary::GenericMap_SetMapPropertyByName(UObject *param_1,FName param_2,void *param_3)

{
  FProperty *this;
  bool bVar1;
  FName FVar2;
  void *pvVar3;
  FName FVar4;
  TFieldIterator<FMapProperty> local_38;
  
  if ((param_1 != (UObject *)0x0) &&
     (local_38.Struct = *(UStruct **)&param_1->field_0x10, param_2 != (FName)0x0)) {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
    if (local_38.Struct == (UStruct *)0x0) {
      local_38.Field = (FField *)0x0;
    }
    else {
      local_38.Field = (local_38.Struct)->ChildProperties;
    }
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    TFieldIterator<FMapProperty>::IterateToNext(&local_38);
    this = (FProperty *)local_38.Field;
    while (this != (FProperty *)0x0) {
      local_38.Field = (FField *)this;
      bVar1 = IsThisNotNull(this,"FField::GetFName");
      FVar2 = FVar4;
      if (bVar1) {
        FVar2 = (FName)this->_padding_;
      }
      if (FVar2 == param_2) {
        if (this == (FProperty *)0x0) {
          return;
        }
        pvVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
        (**(code **)(this->_padding_ + 0xf0))(this,pvVar3,param_3,1);
        return;
      }
      local_38.Field = (FField *)this->_padding_;
      TFieldIterator<FMapProperty>::IterateToNext(&local_38);
      this = (FProperty *)local_38.Field;
    }
  }
  return;
}

// GenericMap_Values @ 1476ab6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintMapLibrary::GenericMap_Values
          (void *param_1,FMapProperty *param_2,void *param_3,FArrayProperty *param_4)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  uchar *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStackY_f8 [32];
  int local_c8 [2];
  FScriptArrayHelper local_c0;
  int local_a0;
  int local_9c;
  FScriptMapHelper *local_98;
  int iStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  TScriptContainerIterator<FScriptMapHelper> local_78;
  FScriptMapHelper local_68;
  ulonglong local_30;
  
  if ((param_1 != (void *)0x0) &&
     (local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8, param_3 != (void *)0x0)) {
    plVar5 = (longlong *)(**(code **)(param_4->Inner->_padding_ + 0x158))(param_4->Inner,local_88);
    plVar6 = (longlong *)(**(code **)(param_2->ValueProp->_padding_ + 0x158))();
    if (*plVar6 == *plVar5) {
      FScriptMapHelper::FScriptMapHelper(&local_68,param_2,param_1);
      EVar1 = param_4->ArrayFlags;
      local_c0.ElementAlignment = (**(code **)(param_4->Inner->_padding_ + 0x168))();
      local_c0.InnerProperty = param_4->Inner;
      local_c0.ElementSize = (local_c0.InnerProperty)->ElementSize;
      local_c0.field1_0x8 = (FScriptArrayHelper_u_8)param_3;
      local_c0.ArrayFlags = EVar1;
      if ((local_c0.ElementSize < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_c0.InnerProperty == (FProperty *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_c0.field1_0x8.FreezableArray)->ArrayNum != 0) {
        FScriptArrayHelper::DestructItems
                  (&local_c0,0,(local_c0.field1_0x8.FreezableArray)->ArrayNum);
        (local_c0.field1_0x8.FreezableArray)->ArrayNum = 0;
        if ((local_c0.ArrayFlags & UsesMemoryImageAllocator) == None) {
          if ((local_c0.field1_0x8.FreezableArray)->ArrayMax != 0) {
            TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                      ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                       local_c0.field1_0x8.HeapArray,0,local_c0.ElementSize,
                       local_c0.ElementAlignment);
          }
        }
        else if ((local_c0.field1_0x8.FreezableArray)->ArrayMax != 0) {
          TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                    (local_c0.field1_0x8.FreezableArray,0,local_c0.ElementSize,
                     local_c0.ElementAlignment);
        }
      }
      pFVar2 = param_4->Inner;
      local_98 = &local_68;
      iVar10 = 0;
      iStack_90 = 0;
      iVar11 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      iVar12 = iStack_90;
      if (0 < iVar11) {
        do {
          local_a0 = iVar10;
          bVar4 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_68,(<lambda_1> *)&local_a0);
          iVar12 = iVar10;
          if (bVar4) break;
          iVar10 = iVar10 + 1;
          iVar12 = iVar10;
        } while (iVar10 < iVar11);
      }
      iStack_90 = iVar12;
      iVar11 = iStack_90;
      iVar12 = 0;
      iStack_8c = 0;
      local_c8[0] = iStack_90;
      bVar4 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_68,(<lambda_1> *)local_c8);
      if (bVar4) {
        do {
          iVar10 = FScriptArrayHelper::AddValues(&local_c0,1);
          local_78.LogicalIndex = iStack_8c;
          local_78.InternalIndex = iStack_90;
          local_78.Container = local_98;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x100);
          puVar7 = FScriptMapHelper::GetValuePtr(&local_68,&local_78);
          if ((local_c0.field1_0x8.FreezableArray)->ArrayNum == 0) {
            lVar9 = 0;
          }
          else {
            uVar8 = (local_c0.field1_0x8.FreezableArray)->_padding_;
            if (((local_c0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
              uVar8 = (longlong)&(local_c0.field1_0x8.HeapArray)->field_0x0 +
                      ((longlong)uVar8 >> 0x18);
            }
            lVar9 = (longlong)local_c0.ElementSize * (longlong)iVar10 + uVar8;
          }
          (*pcVar3)(pFVar2,lVar9,puVar7);
          iVar11 = iVar11 + 1;
          iVar10 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
          iStack_90 = iVar11;
          while ((iVar11 < iVar10 &&
                 (local_9c = iVar11,
                 bVar4 = FScriptMapHelper::
                         WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                   (&local_68,(<lambda_1> *)&local_9c), !bVar4))) {
            iVar11 = iVar11 + 1;
          }
          iVar12 = iVar12 + 1;
          local_c8[0] = iVar11;
          iStack_90 = iVar11;
          iStack_8c = iVar12;
          bVar4 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_68,(<lambda_1> *)local_c8);
        } while (bVar4);
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3783263642519076788>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintMapLibrary.cpp"
                         ,0x4c,"MapProperty->ValueProp->GetID() == ArrayProperty->Inner->GetID()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 1476b40c0

UClass * __cdecl UBlueprintMapLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintMapLibrary",
               &Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintMapLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintMapLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintMapLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton;
}

// StaticRegisterNativesUBlueprintMapLibrary @ 1476ca2a0

void __cdecl UBlueprintMapLibrary::StaticRegisterNativesUBlueprintMapLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintMapLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execMap_Add @ 1476d1690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UBlueprintMapLibrary::execMap_Add(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FMapProperty *pFVar3;
  FProperty *pFVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  FProperty *pFVar7;
  code *pcVar8;
  uchar *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  void *_Dst;
  void *_Dst_00;
  undefined1 auStack_58 [32];
  uchar *local_38;
  ulonglong local_30;
  
  puVar13 = auStack_58;
  local_30 = __security_cookie.value ^ (ulonglong)&local_38;
  _Dst = (void *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FMapProperty *)param_2->MostRecentProperty;
  local_38 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x400000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    pFVar4 = pFVar3->KeyProp;
    iVar1 = pFVar4->ElementSize;
    iVar2 = pFVar4->ArrayDim;
    iVar10 = iVar1 * iVar2;
    puVar13 = auStack_58;
    _Dst_00 = _Dst;
    if (iVar10 != 0) {
      uVar12 = (ulonglong)(iVar10 + 0xf);
      uVar11 = uVar12 + 0xf;
      if (uVar11 <= uVar12) {
        uVar11 = 0xffffffffffffff0;
      }
      puVar13 = auStack_58 + -(uVar11 & 0xfffffffffffffff0);
      _Dst_00 = (void *)((longlong)&local_30 + -(uVar11 & 0xfffffffffffffff0));
    }
    if (((uint)(int)pFVar4->PropertyFlags >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar4->_padding_ + 0x150);
      *(undefined8 *)(puVar13 + -8) = 0x1476d17a2;
      (*pcVar8)(pFVar4,_Dst_00);
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x1476d1791;
      memset(_Dst_00,0,(longlong)iVar1 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar13 + -8) = 0x1476d17af;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
      *(undefined8 *)(puVar13 + -8) = 0x1476d17e0;
      FFrame::StepExplicitProperty(param_2,_Dst_00,pFVar6);
    }
    else {
      pUVar5 = param_2->Object;
      *(undefined8 *)(puVar13 + -8) = 0x1476d17c4;
      FFrame::Step(param_2,pUVar5,_Dst_00);
    }
    pFVar6 = pFVar3->ValueProp;
    iVar1 = pFVar6->ElementSize;
    iVar2 = pFVar6->ArrayDim;
    iVar10 = iVar1 * iVar2;
    if (iVar10 != 0) {
      uVar12 = (ulonglong)(iVar10 + 0xf);
      uVar11 = uVar12 + 0xf;
      if (uVar11 <= uVar12) {
        uVar11 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar13 + -8) = 0x1476d1818;
      _Dst = (void *)((ulonglong)(puVar13 + -(uVar11 & 0xfffffffffffffff0) + 0x2f) &
                     0xfffffffffffffff0);
      puVar13 = puVar13 + -(uVar11 & 0xfffffffffffffff0);
    }
    if (((uint)(int)pFVar6->PropertyFlags >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar6->_padding_ + 0x150);
      *(undefined8 *)(puVar13 + -8) = 0x1476d1854;
      (*pcVar8)(pFVar6,_Dst);
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x1476d1842;
      memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar13 + -8) = 0x1476d1861;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
      *(undefined8 *)(puVar13 + -8) = 0x1476d1892;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar7);
    }
    else {
      pUVar5 = param_2->Object;
      *(undefined8 *)(puVar13 + -8) = 0x1476d1876;
      FFrame::Step(param_2,pUVar5,_Dst);
    }
    puVar9 = local_38;
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    *(undefined8 *)(puVar13 + -8) = 0x1476d18b6;
    GenericMap_Add(puVar9,pFVar3,_Dst_00,_Dst);
    if ((pFVar6->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar8 = *(code **)(pFVar6->_padding_ + 0x138);
      *(undefined8 *)(puVar13 + -8) = 0x1476d18d7;
      (*pcVar8)(pFVar6,_Dst);
    }
    if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar8 = *(code **)(pFVar4->_padding_ + 0x138);
      *(undefined8 *)(puVar13 + -8) = 0x1476d18ec;
      (*pcVar8)(pFVar4,_Dst_00);
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1476d1901;
  return;
}

// execMap_Clear @ 1476d1930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UBlueprintMapLibrary::execMap_Clear(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMapProperty *pFVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  <lambda_1> local_58;
  FScriptMapHelper local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = (FMapProperty *)param_2->MostRecentProperty;
  if ((pFVar2 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x400000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
      FScriptMapHelper::FScriptMapHelper(&local_48,pFVar2,param_2->MostRecentPropertyAddress);
      if ((local_48.MapFlags & UsesMemoryImageAllocator) == None) {
        iVar3 = *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
      }
      else {
        iVar3 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
      }
      iVar3 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar3;
      if (iVar3 != 0) {
        FScriptMapHelper::DestructItems(&local_48,0,iVar3);
        local_58.__this = &local_48;
        local_58.Slack = 0;
        FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                  (&local_48,&local_58);
        return;
      }
    }
  }
  return;
}

// execMap_Contains @ 1476d1a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UBlueprintMapLibrary::execMap_Contains(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FMapProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *_Dst;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar13 = auStack_58;
  local_38 = __security_cookie.value ^ (ulonglong)&local_38;
  _Dst = (undefined1 *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FMapProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x400000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    pFVar5 = pFVar3->KeyProp;
    iVar1 = pFVar5->ElementSize;
    iVar2 = pFVar5->ArrayDim;
    iVar10 = iVar1 * iVar2;
    puVar13 = auStack_58;
    if (iVar10 != 0) {
      uVar12 = (ulonglong)(iVar10 + 0xf);
      uVar11 = uVar12 + 0xf;
      if (uVar11 <= uVar12) {
        uVar11 = 0xffffffffffffff0;
      }
      _Dst = auStack_30 + -(uVar11 & 0xfffffffffffffff0);
      puVar13 = auStack_58 + -(uVar11 & 0xfffffffffffffff0);
    }
    if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x150);
      *(undefined8 *)(puVar13 + -8) = 0x1476d1b5e;
      (*pcVar8)(pFVar5,_Dst);
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x1476d1b4d;
      memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar13 + -8) = 0x1476d1b6b;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
      *(undefined8 *)(puVar13 + -8) = 0x1476d1b9c;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar7);
    }
    else {
      pUVar6 = param_2->Object;
      *(undefined8 *)(puVar13 + -8) = 0x1476d1b80;
      FFrame::Step(param_2,pUVar6,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    *(undefined8 *)(puVar13 + -8) = 0x1476d1bbf;
    bVar9 = GenericMap_Find(puVar4,pFVar3,_Dst,(void *)0x0);
    *(bool *)param_3 = bVar9;
    if ((pFVar5->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x138);
      *(undefined8 *)(puVar13 + -8) = 0x1476d1be2;
      (*pcVar8)(pFVar5,_Dst);
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1476d1bf7;
  return;
}

// execMap_Find @ 1476d1c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UBlueprintMapLibrary::execMap_Find(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FMapProperty *pFVar3;
  FProperty *pFVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  uchar *puVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uchar *puVar17;
  uchar *_Dst;
  uchar *_Dst_00;
  undefined1 auStack_68 [32];
  FProperty *local_48;
  uchar *local_40;
  void *local_38;
  ulonglong local_30;
  
  puVar16 = auStack_68;
  local_30 = __security_cookie.value ^ (ulonglong)&local_48;
  _Dst_00 = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  local_38 = param_3;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FMapProperty *)param_2->MostRecentProperty;
  local_40 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x400000000000) == 0)) {
    param_2->bArrayContextFailed = true;
    goto LAB_1476d1f1f;
  }
  pFVar4 = pFVar3->KeyProp;
  iVar1 = pFVar4->ElementSize;
  iVar2 = pFVar4->ArrayDim;
  iVar12 = iVar1 * iVar2;
  puVar16 = auStack_68;
  _Dst = _Dst_00;
  if (iVar12 != 0) {
    uVar14 = (ulonglong)(iVar12 + 0xf);
    uVar13 = uVar14 + 0xf;
    if (uVar13 <= uVar14) {
      uVar13 = 0xffffffffffffff0;
    }
    puVar16 = auStack_68 + -(uVar13 & 0xfffffffffffffff0);
    _Dst = (uchar *)((longlong)&local_40 + -(uVar13 & 0xfffffffffffffff0));
  }
  if (((uint)(int)pFVar4->PropertyFlags >> 9 & 1) == 0) {
    pcVar8 = *(code **)(pFVar4->_padding_ + 0x150);
    *(undefined8 *)(puVar16 + -8) = 0x1476d1d37;
    (*pcVar8)(pFVar4,_Dst);
  }
  else {
    *(undefined8 *)(puVar16 + -8) = 0x1476d1d25;
    memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  *(undefined8 *)(puVar16 + -8) = 0x1476d1d44;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    *(undefined8 *)(puVar16 + -8) = 0x1476d1d75;
    FFrame::StepExplicitProperty(param_2,_Dst,pFVar6);
  }
  else {
    pUVar5 = param_2->Object;
    *(undefined8 *)(puVar16 + -8) = 0x1476d1d59;
    FFrame::Step(param_2,pUVar5,_Dst);
  }
  pFVar6 = pFVar3->ValueProp;
  iVar1 = pFVar6->ElementSize;
  iVar2 = pFVar6->ArrayDim;
  iVar12 = iVar1 * iVar2;
  local_48 = pFVar6;
  if (iVar12 != 0) {
    uVar13 = (longlong)(iVar12 + 0xf) + 0xf;
    if (uVar13 <= (ulonglong)(longlong)(iVar12 + 0xf)) {
      uVar13 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar16 + -8) = 0x1476d1db2;
    _Dst_00 = (uchar *)((ulonglong)(puVar16 + -(uVar13 & 0xfffffffffffffff0) + 0x2f) &
                       0xfffffffffffffff0);
    puVar16 = puVar16 + -(uVar13 & 0xfffffffffffffff0);
  }
  if (((uint)(int)pFVar6->PropertyFlags >> 9 & 1) == 0) {
    pcVar8 = *(code **)(pFVar6->_padding_ + 0x150);
    *(undefined8 *)(puVar16 + -8) = 0x1476d1dec;
    (*pcVar8)(pFVar6,_Dst_00);
  }
  else {
    *(undefined8 *)(puVar16 + -8) = 0x1476d1ddb;
    memset(_Dst_00,0,(longlong)iVar1 * (longlong)iVar2);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  *(undefined8 *)(puVar16 + -8) = 0x1476d1df9;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    *(undefined8 *)(puVar16 + -8) = 0x1476d1e2a;
    FFrame::StepExplicitProperty(param_2,_Dst_00,pFVar6);
  }
  else {
    pUVar5 = param_2->Object;
    *(undefined8 *)(puVar16 + -8) = 0x1476d1e0e;
    FFrame::Step(param_2,pUVar5,_Dst_00);
  }
  puVar10 = local_40;
  pFVar6 = param_2->MostRecentProperty;
  puVar17 = param_2->MostRecentPropertyAddress;
  lVar15 = local_48->_padding_;
  lVar7 = pFVar6->_padding_;
  if ((puVar17 == (uchar *)0x0) || (iVar12 != pFVar6->ElementSize * pFVar6->ArrayDim)) {
LAB_1476d1eb6:
    puVar17 = _Dst_00;
  }
  else {
    lVar9 = lVar7;
    if (*(ulonglong *)(lVar15 + 0x10) == 0) {
      for (; bVar11 = false, lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x20)) {
        if (lVar9 == lVar15) {
          bVar11 = true;
          break;
        }
      }
    }
    else {
      bVar11 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar15 + 0x10)) != 0;
    }
    if (!bVar11) {
      if (*(ulonglong *)(lVar7 + 0x10) == 0) {
        do {
          bVar11 = true;
          if (lVar15 == lVar7) break;
          lVar15 = *(longlong *)(lVar15 + 0x20);
          bVar11 = false;
        } while (lVar15 != 0);
      }
      else {
        bVar11 = (*(ulonglong *)(lVar15 + 0x18) & *(ulonglong *)(lVar7 + 0x10)) != 0;
      }
      if (!bVar11) goto LAB_1476d1eb6;
    }
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(puVar16 + -8) = 0x1476d1eda;
  bVar11 = GenericMap_Find(puVar10,pFVar3,_Dst,puVar17);
  pFVar6 = local_48;
  *(bool *)local_38 = bVar11;
  if ((local_48->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar8 = *(code **)(local_48->_padding_ + 0x138);
    *(undefined8 *)(puVar16 + -8) = 0x1476d1f00;
    (*pcVar8)(pFVar6,_Dst_00);
  }
  if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar8 = *(code **)(pFVar4->_padding_ + 0x138);
    *(undefined8 *)(puVar16 + -8) = 0x1476d1f16;
    (*pcVar8)(pFVar4,_Dst);
  }
LAB_1476d1f1f:
  *(undefined8 *)(puVar16 + -8) = 0x1476d1f2b;
  return;
}

// execMap_GetKeyValueByIndex @ 1476d1f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UBlueprintMapLibrary::execMap_GetKeyValueByIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FMapProperty *pFVar3;
  FProperty *pFVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  longlong lVar7;
  FProperty *pFVar8;
  code *pcVar9;
  bool bVar10;
  longlong lVar11;
  uchar *puVar12;
  uchar *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uchar *puVar17;
  uchar *_Dst;
  int iVar18;
  uchar *_Dst_00;
  bool bVar19;
  undefined1 auStack_88 [48];
  int local_58 [2];
  FMapProperty *local_50;
  uchar *local_48;
  uchar *local_40;
  ulonglong local_38;
  
  puVar16 = auStack_88;
  local_38 = __security_cookie.value ^ (ulonglong)local_58;
  _Dst_00 = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FMapProperty *)param_2->MostRecentProperty;
  local_40 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x400000000000) == 0)) {
    param_2->bArrayContextFailed = true;
    goto LAB_1476d233b;
  }
  local_58[0] = 0;
  FIntProperty::StaticClass();
  puVar16 = auStack_88;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pFVar4 = pFVar3->KeyProp;
  iVar1 = pFVar4->ElementSize;
  iVar2 = pFVar4->ArrayDim;
  iVar18 = iVar1 * iVar2;
  _Dst = _Dst_00;
  if (iVar18 != 0) {
    uVar14 = (longlong)(iVar18 + 0xf) + 0xf;
    if (uVar14 <= (ulonglong)(longlong)(iVar18 + 0xf)) {
      uVar14 = 0xffffffffffffff0;
    }
    puVar16 = auStack_88 + -(uVar14 & 0xfffffffffffffff0);
    _Dst = (uchar *)((longlong)&local_50 + -(uVar14 & 0xfffffffffffffff0));
  }
  if (((uint)(int)pFVar4->PropertyFlags >> 9 & 1) == 0) {
    pcVar9 = *(code **)(pFVar4->_padding_ + 0x150);
    *(undefined8 *)(puVar16 + -8) = 0x1476d20a4;
    (*pcVar9)(pFVar4,_Dst);
  }
  else {
    *(undefined8 *)(puVar16 + -8) = 0x1476d2092;
    memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  *(undefined8 *)(puVar16 + -8) = 0x1476d20b1;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    *(undefined8 *)(puVar16 + -8) = 0x1476d20e2;
    FFrame::StepExplicitProperty(param_2,_Dst,pFVar6);
  }
  else {
    pUVar5 = param_2->Object;
    *(undefined8 *)(puVar16 + -8) = 0x1476d20c6;
    FFrame::Step(param_2,pUVar5,_Dst);
  }
  pFVar6 = param_2->MostRecentProperty;
  lVar15 = pFVar4->_padding_;
  lVar7 = pFVar6->_padding_;
  bVar19 = false;
  local_48 = _Dst;
  if ((param_2->MostRecentPropertyAddress != (uchar *)0x0) &&
     (iVar18 == pFVar6->ElementSize * pFVar6->ArrayDim)) {
    lVar11 = lVar7;
    if (*(ulonglong *)(lVar15 + 0x10) == 0) {
      for (; bVar10 = bVar19, lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x20)) {
        if (lVar11 == lVar15) {
          bVar10 = true;
          break;
        }
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar15 + 0x10)) != 0;
    }
    if (!bVar10) {
      if (*(ulonglong *)(lVar7 + 0x10) == 0) {
        do {
          if (lVar15 == lVar7) {
            bVar10 = true;
            break;
          }
          lVar15 = *(longlong *)(lVar15 + 0x20);
          bVar10 = bVar19;
        } while (lVar15 != 0);
      }
      else {
        bVar10 = (*(ulonglong *)(lVar15 + 0x18) & *(ulonglong *)(lVar7 + 0x10)) != 0;
      }
      if (!bVar10) goto LAB_1476d218d;
    }
    local_48 = param_2->MostRecentPropertyAddress;
  }
LAB_1476d218d:
  pFVar6 = pFVar3->ValueProp;
  iVar1 = pFVar6->ElementSize;
  iVar2 = pFVar6->ArrayDim;
  iVar18 = iVar1 * iVar2;
  local_50 = pFVar3;
  if (iVar18 != 0) {
    uVar14 = (longlong)(iVar18 + 0xf) + 0xf;
    if (uVar14 <= (ulonglong)(longlong)(iVar18 + 0xf)) {
      uVar14 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar16 + -8) = 0x1476d21ce;
    _Dst_00 = (uchar *)((ulonglong)(puVar16 + -(uVar14 & 0xfffffffffffffff0) + 0x3f) &
                       0xfffffffffffffff0);
    puVar16 = puVar16 + -(uVar14 & 0xfffffffffffffff0);
  }
  if (((uint)(int)pFVar6->PropertyFlags >> 9 & 1) == 0) {
    pcVar9 = *(code **)(pFVar6->_padding_ + 0x150);
    *(undefined8 *)(puVar16 + -8) = 0x1476d2208;
    (*pcVar9)(pFVar6,_Dst_00);
  }
  else {
    *(undefined8 *)(puVar16 + -8) = 0x1476d21f7;
    memset(_Dst_00,0,(longlong)iVar1 * (longlong)iVar2);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  *(undefined8 *)(puVar16 + -8) = 0x1476d2215;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar8 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar8->_padding_;
    *(undefined8 *)(puVar16 + -8) = 0x1476d2246;
    FFrame::StepExplicitProperty(param_2,_Dst_00,pFVar8);
  }
  else {
    pUVar5 = param_2->Object;
    *(undefined8 *)(puVar16 + -8) = 0x1476d222a;
    FFrame::Step(param_2,pUVar5,_Dst_00);
  }
  puVar13 = local_40;
  puVar12 = local_48;
  pFVar3 = local_50;
  iVar1 = local_58[0];
  pFVar8 = param_2->MostRecentProperty;
  lVar15 = pFVar6->_padding_;
  lVar7 = pFVar8->_padding_;
  puVar17 = _Dst_00;
  if ((param_2->MostRecentPropertyAddress != (uchar *)0x0) &&
     (iVar18 == pFVar8->ElementSize * pFVar8->ArrayDim)) {
    lVar11 = lVar7;
    if (*(ulonglong *)(lVar15 + 0x10) == 0) {
      for (; bVar10 = bVar19, lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x20)) {
        if (lVar11 == lVar15) {
          bVar10 = true;
          break;
        }
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar15 + 0x10)) != 0;
    }
    if (!bVar10) {
      if (*(ulonglong *)(lVar7 + 0x10) == 0) {
        do {
          if (lVar15 == lVar7) {
            bVar19 = true;
            break;
          }
          lVar15 = *(longlong *)(lVar15 + 0x20);
        } while (lVar15 != 0);
      }
      else {
        bVar19 = (*(ulonglong *)(lVar15 + 0x18) & *(ulonglong *)(lVar7 + 0x10)) != 0;
      }
      if (!bVar19) goto LAB_1476d22d0;
    }
    puVar17 = param_2->MostRecentPropertyAddress;
  }
LAB_1476d22d0:
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uchar **)(puVar16 + 0x20) = puVar17;
  *(undefined8 *)(puVar16 + -8) = 0x1476d22fc;
  GenericMap_GetKeyValueByIndex(puVar13,pFVar3,iVar1,puVar12,*(void **)(puVar16 + 0x20));
  if ((pFVar6->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar9 = *(code **)(pFVar6->_padding_ + 0x138);
    *(undefined8 *)(puVar16 + -8) = 0x1476d231b;
    (*pcVar9)(pFVar6,_Dst_00);
  }
  if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar9 = *(code **)(pFVar4->_padding_ + 0x138);
    *(undefined8 *)(puVar16 + -8) = 0x1476d2332;
    (*pcVar9)(pFVar4,_Dst);
  }
LAB_1476d233b:
  *(undefined8 *)(puVar16 + -8) = 0x1476d2347;
  return;
}

// execMap_GetLastIndex @ 1476d2370

void __cdecl
UBlueprintMapLibrary::execMap_GetLastIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMapProperty *pFVar2;
  int iVar3;
  FScriptMapHelper local_48;
  
  iVar3 = 0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = (FMapProperty *)param_2->MostRecentProperty;
  if ((pFVar2 != (FMapProperty *)0x0) &&
     ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x400000000000) != 0)) {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
      FScriptMapHelper::FScriptMapHelper(&local_48,pFVar2,param_2->MostRecentPropertyAddress);
      iVar3 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      if ((local_48.MapFlags & UsesMemoryImageAllocator) != None) {
        *(int *)param_3 =
             (iVar3 - ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices) + -1;
        return;
      }
      iVar3 = (iVar3 - *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34) + -1;
    }
    *(int *)param_3 = iVar3;
    return;
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execMap_IsEmpty @ 1476d2460

void __cdecl UBlueprintMapLibrary::execMap_IsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FMapProperty *pFVar3;
  FScriptMapHelper local_48;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FMapProperty *)param_2->MostRecentProperty;
  if ((pFVar3 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x400000000000) == 0)) {
    param_2->bArrayContextFailed = true;
    return;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_2->MostRecentPropertyAddress == (uchar *)0x0) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  FScriptMapHelper::FScriptMapHelper(&local_48,pFVar3,param_2->MostRecentPropertyAddress);
  iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if ((local_48.MapFlags & UsesMemoryImageAllocator) != None) {
    *(bool *)param_3 = iVar1 == ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices
    ;
    return;
  }
  *(bool *)param_3 = iVar1 == *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
  return;
}

// execMap_IsNotEmpty @ 1476d2570

void __cdecl
UBlueprintMapLibrary::execMap_IsNotEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FMapProperty *pFVar3;
  FScriptMapHelper local_48;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FMapProperty *)param_2->MostRecentProperty;
  if ((pFVar3 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x400000000000) == 0)) {
    param_2->bArrayContextFailed = true;
    return;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_2->MostRecentPropertyAddress == (uchar *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  FScriptMapHelper::FScriptMapHelper(&local_48,pFVar3,param_2->MostRecentPropertyAddress);
  iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if ((local_48.MapFlags & UsesMemoryImageAllocator) != None) {
    *(bool *)param_3 =
         0 < iVar1 - ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
    return;
  }
  *(bool *)param_3 = 0 < iVar1 - *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
  return;
}

// execMap_Keys @ 1476d2680

void __cdecl UBlueprintMapLibrary::execMap_Keys(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMapProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FArrayProperty *pFVar4;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FMapProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FMapProperty *)0x0) &&
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x400000000000) != 0)) {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FArrayProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar4 = (FArrayProperty *)param_2->MostRecentProperty;
    if ((pFVar4 != (FArrayProperty *)0x0) &&
       ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      GenericMap_Keys(puVar2,pFVar1,param_2->MostRecentPropertyAddress,pFVar4);
      return;
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execMap_Length @ 1476d2790

void __cdecl UBlueprintMapLibrary::execMap_Length(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMapProperty *pFVar2;
  int iVar3;
  FScriptMapHelper local_48;
  
  iVar3 = 0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = (FMapProperty *)param_2->MostRecentProperty;
  if ((pFVar2 != (FMapProperty *)0x0) &&
     ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x400000000000) != 0)) {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
      FScriptMapHelper::FScriptMapHelper(&local_48,pFVar2,param_2->MostRecentPropertyAddress);
      iVar3 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      if ((local_48.MapFlags & UsesMemoryImageAllocator) != None) {
        *(int *)param_3 =
             iVar3 - ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
        return;
      }
      iVar3 = iVar3 - *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
    }
    *(int *)param_3 = iVar3;
    return;
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execMap_Remove @ 1476d2880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UBlueprintMapLibrary::execMap_Remove(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FMapProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  void *_Dst;
  undefined1 auStack_b8 [32];
  FScriptMapHelper *local_98;
  void *local_90;
  FProperty *local_88;
  FScriptMapHelper local_80;
  ulonglong local_48;
  
  puVar13 = auStack_b8;
  local_48 = __security_cookie.value ^ (ulonglong)&local_98;
  _Dst = (void *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FMapProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x400000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    pFVar5 = pFVar3->KeyProp;
    iVar1 = pFVar5->ElementSize;
    iVar2 = pFVar5->ArrayDim;
    iVar10 = iVar1 * iVar2;
    puVar13 = auStack_b8;
    if (iVar10 != 0) {
      uVar12 = (ulonglong)(iVar10 + 0xf);
      uVar11 = uVar12 + 0xf;
      if (uVar11 <= uVar12) {
        uVar11 = 0xffffffffffffff0;
      }
      _Dst = (void *)((longlong)&local_90 + -(uVar11 & 0xfffffffffffffff0));
      puVar13 = auStack_b8 + -(uVar11 & 0xfffffffffffffff0);
    }
    if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x150);
      *(undefined8 *)(puVar13 + -8) = 0x1476d298e;
      (*pcVar8)(pFVar5,_Dst);
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x1476d297d;
      memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar13 + -8) = 0x1476d299b;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
      *(undefined8 *)(puVar13 + -8) = 0x1476d29cc;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar7);
    }
    else {
      pUVar6 = param_2->Object;
      *(undefined8 *)(puVar13 + -8) = 0x1476d29b0;
      FFrame::Step(param_2,pUVar6,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar4 == (uchar *)0x0) {
      bVar9 = false;
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x1476d29f2;
      FScriptMapHelper::FScriptMapHelper(&local_80,pFVar3,puVar4);
      local_98 = &local_80;
      local_88 = local_80.KeyProp;
      local_90 = _Dst;
      *(undefined8 *)(puVar13 + -8) = 0x1476d2a13;
      bVar9 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::RemovePair_::__l2::<lambda_1>_>
                        (&local_80,(<lambda_1> *)&local_98);
    }
    *(bool *)param_3 = bVar9;
    if ((pFVar5->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x138);
      *(undefined8 *)(puVar13 + -8) = 0x1476d2a3a;
      (*pcVar8)(pFVar5,_Dst);
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1476d2a4f;
  return;
}

// execMap_Values @ 1476d2a70

void __cdecl UBlueprintMapLibrary::execMap_Values(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMapProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FArrayProperty *pFVar4;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FMapProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FMapProperty *)0x0) &&
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x400000000000) != 0)) {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FArrayProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar4 = (FArrayProperty *)param_2->MostRecentProperty;
    if ((pFVar4 != (FArrayProperty *)0x0) &&
       ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      GenericMap_Values(puVar2,pFVar1,param_2->MostRecentPropertyAddress,pFVar4);
      return;
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execSetMapPropertyByName @ 1476d42e0

void __cdecl
UBlueprintMapLibrary::execSetMapPropertyByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  longlong lVar4;
  UObject *pUVar5;
  bool bVar6;
  void *pvVar7;
  longlong local_res10;
  UObject *local_res20;
  longlong lVar8;
  TFieldIterator<FMapProperty> local_30;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pUVar5 = local_res20;
  lVar4 = local_res10;
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 != (UObject *)0x0) &&
     (local_30.Struct = *(UStruct **)&local_res20->field_0x10, local_res10 != 0)) {
    if (local_30.Struct == (UStruct *)0x0) {
      local_30.Field = (FField *)0x0;
    }
    else {
      local_30.Field = (local_30.Struct)->ChildProperties;
    }
    local_30.InterfaceIndex = -1;
    local_30.bIncludeSuper = true;
    local_30.bIncludeDeprecated = true;
    local_30.bIncludeInterface = false;
    TFieldIterator<FMapProperty>::IterateToNext(&local_30);
    pFVar2 = (FProperty *)local_30.Field;
    while (pFVar2 != (FProperty *)0x0) {
      local_30.Field = (FField *)pFVar2;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetFName");
      if (bVar6) {
        lVar8 = pFVar2->_padding_;
      }
      else {
        lVar8 = 0;
      }
      if (lVar8 == lVar4) {
        if (pFVar2 == (FProperty *)0x0) {
          return;
        }
        pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar2,pUVar5,0);
        (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,pvVar7,puVar3,1,lVar8);
        return;
      }
      local_30.Field = (FField *)pFVar2->_padding_;
      TFieldIterator<FMapProperty>::IterateToNext(&local_30);
      pFVar2 = (FProperty *)local_30.Field;
    }
  }
  return;
}

