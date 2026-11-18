// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// CopyAndCastFloatingPointArray<float,double> @ 1483d39f0

void __cdecl
FPropertyAccessSystem::CopyAndCastFloatingPointArray<float,double>
          (FArrayProperty *param_1,void *param_2,FArrayProperty *param_3,void *param_4)

{
  EArrayPropertyFlags EVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  int iVar4;
  FProperty *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  double *pdVar9;
  float *pfVar10;
  int iVar11;
  FScriptArrayHelper local_38;
  
  EVar1 = param_1->ArrayFlags;
  (**(code **)(param_1->Inner->_padding_ + 0x168))();
  pFVar5 = param_1->Inner;
  iVar3 = pFVar5->ElementSize;
  if ((iVar3 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar5 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar2 = param_3->ArrayFlags;
  local_38.ElementAlignment = (**(code **)(param_3->Inner->_padding_ + 0x168))();
  local_38.InnerProperty = param_3->Inner;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8 = (FScriptArrayHelper_u_8)param_4;
  local_38.ArrayFlags = EVar2;
  if ((local_38.ElementSize < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar11 = *(int *)((longlong)param_2 + 8);
  if (-1 < iVar11) {
    iVar4 = (local_38.field1_0x8.FreezableArray)->ArrayNum;
    if (iVar4 < iVar11) {
      FScriptArrayHelper::AddValues(&local_38,iVar11 - iVar4);
    }
    else if (iVar11 < iVar4) {
      FScriptArrayHelper::RemoveValues(&local_38,iVar11,iVar4 - iVar11);
    }
    for (iVar11 = 0; iVar11 < *(int *)((longlong)param_2 + 8); iVar11 = iVar11 + 1) {
      if (*(int *)((longlong)param_2 + 8) == 0) {
        pfVar10 = (float *)0x0;
      }
      else {
        uVar8 = *(ulonglong *)param_2;
        if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
          uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_2;
        }
        pfVar10 = (float *)((longlong)iVar3 * (longlong)iVar11 + uVar8);
      }
      if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
        pdVar9 = (double *)0x0;
      }
      else {
        uVar8 = (local_38.field1_0x8.FreezableArray)->_padding_;
        if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
          uVar8 = (longlong)&(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar8 >> 0x18);
        }
        pdVar9 = (double *)((longlong)local_38.ElementSize * (longlong)iVar11 + uVar8);
      }
      *pdVar9 = (double)*pfVar10;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((longlong)iVar11);
}

// CopyAndCastFloatingPointArray<double,float> @ 1483d3c00

void __cdecl
FPropertyAccessSystem::CopyAndCastFloatingPointArray<double,float>
          (FArrayProperty *param_1,void *param_2,FArrayProperty *param_3,void *param_4)

{
  EArrayPropertyFlags EVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  int iVar4;
  FProperty *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  float *pfVar9;
  double *pdVar10;
  int iVar11;
  FScriptArrayHelper local_38;
  
  EVar1 = param_1->ArrayFlags;
  (**(code **)(param_1->Inner->_padding_ + 0x168))();
  pFVar5 = param_1->Inner;
  iVar3 = pFVar5->ElementSize;
  if ((iVar3 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar5 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar2 = param_3->ArrayFlags;
  local_38.ElementAlignment = (**(code **)(param_3->Inner->_padding_ + 0x168))();
  local_38.InnerProperty = param_3->Inner;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8 = (FScriptArrayHelper_u_8)param_4;
  local_38.ArrayFlags = EVar2;
  if ((local_38.ElementSize < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar11 = *(int *)((longlong)param_2 + 8);
  if (-1 < iVar11) {
    iVar4 = (local_38.field1_0x8.FreezableArray)->ArrayNum;
    if (iVar4 < iVar11) {
      FScriptArrayHelper::AddValues(&local_38,iVar11 - iVar4);
    }
    else if (iVar11 < iVar4) {
      FScriptArrayHelper::RemoveValues(&local_38,iVar11,iVar4 - iVar11);
    }
    for (iVar11 = 0; iVar11 < *(int *)((longlong)param_2 + 8); iVar11 = iVar11 + 1) {
      if (*(int *)((longlong)param_2 + 8) == 0) {
        pdVar10 = (double *)0x0;
      }
      else {
        uVar8 = *(ulonglong *)param_2;
        if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
          uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_2;
        }
        pdVar10 = (double *)((longlong)iVar3 * (longlong)iVar11 + uVar8);
      }
      if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
        pfVar9 = (float *)0x0;
      }
      else {
        uVar8 = (local_38.field1_0x8.FreezableArray)->_padding_;
        if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
          uVar8 = (longlong)&(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar8 >> 0x18);
        }
        pfVar9 = (float *)((longlong)local_38.ElementSize * (longlong)iVar11 + uVar8);
      }
      *pfVar9 = (float)*pdVar10;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((longlong)iVar11);
}

// CopyAndCastFloatingPointMapValues<float,double> @ 1483d3e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPropertyAccessSystem::CopyAndCastFloatingPointMapValues<float,double>
          (FMapProperty *param_1,void *param_2,FMapProperty *param_3,void *param_4)

{
  code *pcVar1;
  FScriptMapHelper_u_16 FVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  float *pfVar8;
  undefined1 auStackY_2f8 [32];
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0 [2];
  double local_298;
  FProperty *local_290;
  FProperty *local_288;
  FProperty *local_280;
  FProperty *local_278;
  FProperty *local_270;
  FProperty *local_268;
  FProperty *local_260;
  FProperty *local_258;
  <lambda_1> local_250;
  FProperty *local_240;
  void *local_238;
  FProperty *local_230;
  double *local_228;
  code *local_220;
  code **local_218;
  code *local_210;
  code **local_208;
  code *local_200;
  FProperty **local_1f8;
  code *local_1f0;
  FProperty **local_1e8;
  FProperty *local_1e0;
  void *local_1d8;
  FProperty *local_1d0;
  double *local_1c8;
  code *local_1c0;
  code **local_1b8;
  code *local_1b0;
  code **local_1a8;
  code *local_1a0;
  FProperty **local_198;
  code *local_190;
  FProperty **local_188;
  FScriptMapHelper local_180;
  FScriptMapHelper local_148;
  code *local_110;
  FProperty **local_108;
  code *local_100;
  FProperty **local_f8;
  FScriptMapLayout local_f0;
  code *local_d8;
  FProperty **local_d0;
  code *local_c8;
  FProperty **local_c0;
  FScriptMapLayout local_b8;
  code *local_a0;
  FProperty **local_98;
  code *local_90;
  FProperty **local_88;
  FScriptMapLayout local_80;
  code *local_68;
  FProperty **local_60;
  code *local_58;
  FProperty **local_50;
  FScriptMapLayout local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FScriptMapHelper::FScriptMapHelper(&local_180,param_1,param_2);
  FScriptMapHelper::FScriptMapHelper(&local_148,param_3,param_4);
  if ((local_148.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar7 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
              *)&(local_148.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
  }
  else {
    iVar7 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                        *)&(local_148.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                     AllocatorInstance.SecondaryData.field_0x4;
  }
  iVar7 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
             *)&(local_148.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar7;
  iVar5 = 0;
  if (iVar7 != 0) {
    FScriptMapHelper::DestructItems(&local_148,0,iVar7);
    local_250.__this = &local_148;
    local_250.Slack = 0;
    FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
              (&local_148,&local_250);
  }
  iVar7 = ((local_180.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if (0 < iVar7) {
    do {
      local_2b4 = iVar5;
      bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_180,(<lambda_1> *)&local_2b4);
      if (bVar3) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar7);
  }
  local_2b8 = iVar5;
  bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (&local_180,(<lambda_1> *)&local_2b8);
  if (bVar3) {
    do {
      FVar2 = local_180.field2_0x10;
      if ((local_180.MapFlags & UsesMemoryImageAllocator) == None) {
        local_2ac = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_180,(<lambda_1> *)&local_2ac);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1321,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pvVar6 = (void *)((longlong)(iVar5 * local_180.MapLayout.SetLayout.SparseArrayLayout.Size) +
                         ((FVar2.FreezableMap)->Pairs).Elements.Data._padding_);
      }
      else {
        local_2b0 = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_180,(<lambda_1> *)&local_2b0);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1321,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar4 = (undefined1 *)((FVar2.FreezableMap)->Pairs).Elements.Data._padding_;
        if (((ulonglong)puVar4 & 1) != 0) {
          puVar4 = &(FVar2.HeapMap)->field_0x0 + ((longlong)puVar4 >> 0x18);
        }
        pvVar6 = puVar4 + iVar5 * local_180.MapLayout.SetLayout.SparseArrayLayout.Size;
      }
      FVar2 = local_180.field2_0x10;
      if ((local_180.MapFlags & UsesMemoryImageAllocator) == None) {
        local_2a4 = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_180,(<lambda_1> *)&local_2a4);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x133f,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pfVar8 = (float *)((longlong)(iVar5 * local_180.MapLayout.SetLayout.SparseArrayLayout.Size)
                           + (longlong)local_180.MapLayout.ValueOffset +
                          ((FVar2.FreezableMap)->Pairs).Elements.Data._padding_);
      }
      else {
        local_2a8 = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_180,(<lambda_1> *)&local_2a8);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x133f,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar4 = (undefined1 *)((FVar2.FreezableMap)->Pairs).Elements.Data._padding_;
        if (((ulonglong)puVar4 & 1) != 0) {
          puVar4 = &(FVar2.HeapMap)->field_0x0 + ((longlong)puVar4 >> 0x18);
        }
        pfVar8 = (float *)(puVar4 + (longlong)local_180.MapLayout.ValueOffset +
                                    (longlong)
                                    (iVar5 * local_180.MapLayout.SetLayout.SparseArrayLayout.Size));
      }
      local_298 = (double)*pfVar8;
      if ((local_148.MapFlags & UsesMemoryImageAllocator) == None) {
        local_268 = local_148.ValueProp;
        local_1d0 = local_148.ValueProp;
        local_1c8 = &local_298;
        local_270 = local_148.KeyProp;
        local_1e0 = local_148.KeyProp;
        local_a0 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_6>,void,void_*>
                   ::Call;
        local_98 = &local_270;
        local_90 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_7>,void,void_*>
                   ::Call;
        local_88 = &local_268;
        local_1b8 = &local_a0;
        local_1c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_2>,void,void_*>
                    ::Call;
        local_68 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*>
                   ::Call;
        local_60 = &local_1e0;
        local_58 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_4>,void,void_*>
                   ::Call;
        local_50 = &local_1d0;
        local_1a8 = &local_68;
        local_1b0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_1>,void,void_*>
                    ::Call;
        local_1a0 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                    ::Call;
        local_198 = &local_260;
        local_190 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                    ::Call;
        local_188 = &local_258;
        local_260 = local_148.KeyProp;
        local_258 = local_148.KeyProp;
        local_80.ValueOffset = local_148.MapLayout.ValueOffset;
        local_80.SetLayout.HashNextIdOffset = local_148.MapLayout.SetLayout.HashNextIdOffset;
        local_80.SetLayout.HashIndexOffset = local_148.MapLayout.SetLayout.HashIndexOffset;
        local_80.SetLayout.Size = local_148.MapLayout.SetLayout.Size;
        local_80.SetLayout.SparseArrayLayout = local_148.MapLayout.SetLayout.SparseArrayLayout;
        local_48.ValueOffset = local_148.MapLayout.ValueOffset;
        local_48.SetLayout.HashNextIdOffset = local_148.MapLayout.SetLayout.HashNextIdOffset;
        local_48.SetLayout.HashIndexOffset = local_148.MapLayout.SetLayout.HashIndexOffset;
        local_48.SetLayout.Size = local_148.MapLayout.SetLayout.Size;
        local_48.SetLayout.SparseArrayLayout = local_148.MapLayout.SetLayout.SparseArrayLayout;
        local_1d8 = pvVar6;
        TScriptSparseSet<FDefaultSetAllocator>::Add
                  ((TScriptSparseSet<FDefaultSetAllocator> *)local_148.field2_0x10.HeapMap,pvVar6,
                   &local_148.MapLayout.SetLayout,
                   (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_190,
                   (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_1a0,
                   (TFunctionRef<void___cdecl(void_*)> *)&local_1b0,
                   (TFunctionRef<void___cdecl(void_*)> *)&local_1c0);
      }
      else {
        local_288 = local_148.ValueProp;
        local_230 = local_148.ValueProp;
        local_228 = &local_298;
        local_290 = local_148.KeyProp;
        local_108 = &local_290;
        local_240 = local_148.KeyProp;
        local_f8 = &local_288;
        local_218 = &local_110;
        local_d0 = &local_240;
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_4>,void,void_*>
                   ::Call;
        local_c0 = &local_230;
        local_208 = &local_d8;
        local_210 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_1>,void,void_*>
                    ::Call;
        local_200 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                    ::Call;
        local_1f8 = &local_280;
        local_1f0 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                    ::Call;
        local_1e8 = &local_278;
        local_280 = local_148.KeyProp;
        local_278 = local_148.KeyProp;
        local_110 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_6>,void,void_*>
                    ::Call;
        local_100 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_7>,void,void_*>
                    ::Call;
        local_f0.ValueOffset = local_148.MapLayout.ValueOffset;
        local_f0.SetLayout.HashNextIdOffset = local_148.MapLayout.SetLayout.HashNextIdOffset;
        local_f0.SetLayout.HashIndexOffset = local_148.MapLayout.SetLayout.HashIndexOffset;
        local_f0.SetLayout.Size = local_148.MapLayout.SetLayout.Size;
        local_220 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_2>,void,void_*>
                    ::Call;
        local_f0.SetLayout.SparseArrayLayout = local_148.MapLayout.SetLayout.SparseArrayLayout;
        local_d8 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*>
                   ::Call;
        local_b8.ValueOffset = local_148.MapLayout.ValueOffset;
        local_b8.SetLayout.HashNextIdOffset = local_148.MapLayout.SetLayout.HashNextIdOffset;
        local_b8.SetLayout.HashIndexOffset = local_148.MapLayout.SetLayout.HashIndexOffset;
        local_b8.SetLayout.Size = local_148.MapLayout.SetLayout.Size;
        local_b8.SetLayout.SparseArrayLayout = local_148.MapLayout.SetLayout.SparseArrayLayout;
        local_238 = pvVar6;
        TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
        ::Add((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
               *)local_148.field2_0x10.HeapMap,pvVar6,&local_148.MapLayout.SetLayout,
              (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_1f0,
              (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_200,
              (TFunctionRef<void___cdecl(void_*)> *)&local_210,
              (TFunctionRef<void___cdecl(void_*)> *)&local_220);
      }
      iVar7 = ((local_180.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      do {
        iVar5 = iVar5 + 1;
        if (iVar7 <= iVar5) break;
        local_2a0[0] = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_180,(<lambda_1> *)local_2a0);
      } while (!bVar3);
      local_2b8 = iVar5;
      bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_180,(<lambda_1> *)&local_2b8);
    } while (bVar3);
  }
  return;
}

// CopyAndCastFloatingPointMapValues<double,float> @ 1483d43e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPropertyAccessSystem::CopyAndCastFloatingPointMapValues<double,float>
          (FMapProperty *param_1,void *param_2,FMapProperty *param_3,void *param_4)

{
  code *pcVar1;
  FScriptMapHelper_u_16 FVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  double *pdVar8;
  undefined1 auStackY_2f8 [32];
  int local_2b8;
  float local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  FProperty *local_298;
  FProperty *local_290;
  FProperty *local_288;
  FProperty *local_280;
  FProperty *local_278;
  FProperty *local_270;
  FProperty *local_268;
  FProperty *local_260;
  <lambda_1> local_258;
  FProperty *local_248;
  void *local_240;
  FProperty *local_238;
  float *local_230;
  code *local_228;
  code **local_220;
  code *local_218;
  code **local_210;
  code *local_208;
  FProperty **local_200;
  code *local_1f8;
  FProperty **local_1f0;
  FProperty *local_1e8;
  void *local_1e0;
  FProperty *local_1d8;
  float *local_1d0;
  code *local_1c8;
  code **local_1c0;
  code *local_1b8;
  code **local_1b0;
  code *local_1a8;
  FProperty **local_1a0;
  code *local_198;
  FProperty **local_190;
  FScriptMapHelper local_188;
  FScriptMapHelper local_150;
  code *local_118;
  FProperty **local_110;
  code *local_108;
  FProperty **local_100;
  FScriptMapLayout local_f8;
  code *local_e0;
  FProperty **local_d8;
  code *local_d0;
  FProperty **local_c8;
  FScriptMapLayout local_c0;
  code *local_a8;
  FProperty **local_a0;
  code *local_98;
  FProperty **local_90;
  FScriptMapLayout local_88;
  code *local_70;
  FProperty **local_68;
  code *local_60;
  FProperty **local_58;
  FScriptMapLayout local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FScriptMapHelper::FScriptMapHelper(&local_188,param_1,param_2);
  FScriptMapHelper::FScriptMapHelper(&local_150,param_3,param_4);
  if ((local_150.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar7 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
              *)&(local_150.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
  }
  else {
    iVar7 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                        *)&(local_150.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                     AllocatorInstance.SecondaryData.field_0x4;
  }
  iVar7 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
             *)&(local_150.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar7;
  iVar5 = 0;
  if (iVar7 != 0) {
    FScriptMapHelper::DestructItems(&local_150,0,iVar7);
    local_258.__this = &local_150;
    local_258.Slack = 0;
    FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
              (&local_150,&local_258);
  }
  iVar7 = ((local_188.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if (0 < iVar7) {
    do {
      local_2b0 = iVar5;
      bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_188,(<lambda_1> *)&local_2b0);
      if (bVar3) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar7);
  }
  local_2b8 = iVar5;
  bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (&local_188,(<lambda_1> *)&local_2b8);
  if (bVar3) {
    do {
      FVar2 = local_188.field2_0x10;
      if ((local_188.MapFlags & UsesMemoryImageAllocator) == None) {
        local_2a8 = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_188,(<lambda_1> *)&local_2a8);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1321,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pvVar6 = (void *)((longlong)(iVar5 * local_188.MapLayout.SetLayout.SparseArrayLayout.Size) +
                         ((FVar2.FreezableMap)->Pairs).Elements.Data._padding_);
      }
      else {
        local_2ac = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_188,(<lambda_1> *)&local_2ac);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1321,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar4 = (undefined1 *)((FVar2.FreezableMap)->Pairs).Elements.Data._padding_;
        if (((ulonglong)puVar4 & 1) != 0) {
          puVar4 = &(FVar2.HeapMap)->field_0x0 + ((longlong)puVar4 >> 0x18);
        }
        pvVar6 = puVar4 + iVar5 * local_188.MapLayout.SetLayout.SparseArrayLayout.Size;
      }
      FVar2 = local_188.field2_0x10;
      if ((local_188.MapFlags & UsesMemoryImageAllocator) == None) {
        local_2a0 = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_188,(<lambda_1> *)&local_2a0);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x133f,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pdVar8 = (double *)
                 ((longlong)(iVar5 * local_188.MapLayout.SetLayout.SparseArrayLayout.Size) +
                  (longlong)local_188.MapLayout.ValueOffset +
                 ((FVar2.FreezableMap)->Pairs).Elements.Data._padding_);
      }
      else {
        local_2a4 = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_188,(<lambda_1> *)&local_2a4);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x133f,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar4 = (undefined1 *)((FVar2.FreezableMap)->Pairs).Elements.Data._padding_;
        if (((ulonglong)puVar4 & 1) != 0) {
          puVar4 = &(FVar2.HeapMap)->field_0x0 + ((longlong)puVar4 >> 0x18);
        }
        pdVar8 = (double *)
                 (puVar4 + (longlong)local_188.MapLayout.ValueOffset +
                           (longlong)(iVar5 * local_188.MapLayout.SetLayout.SparseArrayLayout.Size))
        ;
      }
      local_2b4 = (float)*pdVar8;
      if ((local_150.MapFlags & UsesMemoryImageAllocator) == None) {
        local_270 = local_150.ValueProp;
        local_1d8 = local_150.ValueProp;
        local_1d0 = &local_2b4;
        local_278 = local_150.KeyProp;
        local_1e8 = local_150.KeyProp;
        local_a8 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_6>,void,void_*>
                   ::Call;
        local_a0 = &local_278;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_7>,void,void_*>
                   ::Call;
        local_90 = &local_270;
        local_1c0 = &local_a8;
        local_1c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_2>,void,void_*>
                    ::Call;
        local_70 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*>
                   ::Call;
        local_68 = &local_1e8;
        local_60 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_4>,void,void_*>
                   ::Call;
        local_58 = &local_1d8;
        local_1b0 = &local_70;
        local_1b8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_1>,void,void_*>
                    ::Call;
        local_1a8 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                    ::Call;
        local_1a0 = &local_268;
        local_198 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                    ::Call;
        local_190 = &local_260;
        local_268 = local_150.KeyProp;
        local_260 = local_150.KeyProp;
        local_88.ValueOffset = local_150.MapLayout.ValueOffset;
        local_88.SetLayout.HashNextIdOffset = local_150.MapLayout.SetLayout.HashNextIdOffset;
        local_88.SetLayout.HashIndexOffset = local_150.MapLayout.SetLayout.HashIndexOffset;
        local_88.SetLayout.Size = local_150.MapLayout.SetLayout.Size;
        local_88.SetLayout.SparseArrayLayout = local_150.MapLayout.SetLayout.SparseArrayLayout;
        local_50.ValueOffset = local_150.MapLayout.ValueOffset;
        local_50.SetLayout.HashNextIdOffset = local_150.MapLayout.SetLayout.HashNextIdOffset;
        local_50.SetLayout.HashIndexOffset = local_150.MapLayout.SetLayout.HashIndexOffset;
        local_50.SetLayout.Size = local_150.MapLayout.SetLayout.Size;
        local_50.SetLayout.SparseArrayLayout = local_150.MapLayout.SetLayout.SparseArrayLayout;
        local_1e0 = pvVar6;
        TScriptSparseSet<FDefaultSetAllocator>::Add
                  ((TScriptSparseSet<FDefaultSetAllocator> *)local_150.field2_0x10.HeapMap,pvVar6,
                   &local_150.MapLayout.SetLayout,
                   (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_198,
                   (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_1a8,
                   (TFunctionRef<void___cdecl(void_*)> *)&local_1b8,
                   (TFunctionRef<void___cdecl(void_*)> *)&local_1c8);
      }
      else {
        local_290 = local_150.ValueProp;
        local_238 = local_150.ValueProp;
        local_230 = &local_2b4;
        local_298 = local_150.KeyProp;
        local_110 = &local_298;
        local_248 = local_150.KeyProp;
        local_100 = &local_290;
        local_220 = &local_118;
        local_d8 = &local_248;
        local_d0 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_4>,void,void_*>
                   ::Call;
        local_c8 = &local_238;
        local_210 = &local_e0;
        local_218 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_1>,void,void_*>
                    ::Call;
        local_208 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                    ::Call;
        local_200 = &local_288;
        local_1f8 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                    ::Call;
        local_1f0 = &local_280;
        local_288 = local_150.KeyProp;
        local_280 = local_150.KeyProp;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_6>,void,void_*>
                    ::Call;
        local_108 = UE::Core::Private::Function::
                    TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_7>,void,void_*>
                    ::Call;
        local_f8.ValueOffset = local_150.MapLayout.ValueOffset;
        local_f8.SetLayout.HashNextIdOffset = local_150.MapLayout.SetLayout.HashNextIdOffset;
        local_f8.SetLayout.HashIndexOffset = local_150.MapLayout.SetLayout.HashIndexOffset;
        local_f8.SetLayout.Size = local_150.MapLayout.SetLayout.Size;
        local_228 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_2>,void,void_*>
                    ::Call;
        local_f8.SetLayout.SparseArrayLayout = local_150.MapLayout.SetLayout.SparseArrayLayout;
        local_e0 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*>
                   ::Call;
        local_c0.ValueOffset = local_150.MapLayout.ValueOffset;
        local_c0.SetLayout.HashNextIdOffset = local_150.MapLayout.SetLayout.HashNextIdOffset;
        local_c0.SetLayout.HashIndexOffset = local_150.MapLayout.SetLayout.HashIndexOffset;
        local_c0.SetLayout.Size = local_150.MapLayout.SetLayout.Size;
        local_c0.SetLayout.SparseArrayLayout = local_150.MapLayout.SetLayout.SparseArrayLayout;
        local_240 = pvVar6;
        TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
        ::Add((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
               *)local_150.field2_0x10.HeapMap,pvVar6,&local_150.MapLayout.SetLayout,
              (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_1f8,
              (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_208,
              (TFunctionRef<void___cdecl(void_*)> *)&local_218,
              (TFunctionRef<void___cdecl(void_*)> *)&local_228);
      }
      iVar7 = ((local_188.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      do {
        iVar5 = iVar5 + 1;
        if (iVar7 <= iVar5) break;
        local_29c = iVar5;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_188,(<lambda_1> *)&local_29c);
      } while (!bVar3);
      local_2b8 = iVar5;
      bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_188,(<lambda_1> *)&local_2b8);
    } while (bVar3);
  }
  return;
}

// CallNativeAccessor @ 1483f2a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPropertyAccessSystem::CallNativeAccessor(UObject *param_1,UFunction *param_2,void *param_3)

{
  TArray<FFrame_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FField *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  FProperty *pFVar9;
  FBlueprintContextTracker *pFVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  FFrame **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  FFrame *local_f8 [2];
  FFrame local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  uVar8 = (**(code **)(*(longlong *)param_1 + 0x268))(param_1,param_2,0);
  if ((uVar8 & 2) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InObject->GetFunctionCallspace(InFunction, nullptr) & FunctionCallspace::Local) != 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PropertyAccess.cpp"
                       ,0x1ae,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((param_2->FunctionFlags & FUNC_Native) == FUNC_None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFunction->HasAnyFunctionFlags(FUNC_Native)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PropertyAccess.cpp"
                       ,0x1b1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar9 = UFunction::GetReturnProperty(param_2);
  if (pFVar9 == (FProperty *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFunction->GetReturnProperty() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PropertyAccess.cpp"
                       ,0x1b4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->NumParms != '\x01') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFunction->NumParms == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PropertyAccess.cpp"
                       ,0x1b7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (FField *)param_2->_padding_;
  FOutputDevice::FOutputDevice((FOutputDevice *)&local_e8);
  local_e8._padding_ = (longlong)&___7FFrame__6B_;
  local_e8.Code = (uchar *)param_2->_padding_;
  local_e8.Locals = (uchar *)0x0;
  local_e8.MostRecentPropertyContainer = (uchar *)0x0;
  local_e8.FlowStack.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8.FlowStack.ArrayNum = 0;
  local_e8.PreviousFrame = (FFrame *)0x0;
  local_e8.OutParms = (FOutParmRec *)0x0;
  local_e8.CurrentNativeFunction = (UFunction *)0x0;
  local_e8.bArrayContextFailed = false;
  local_e8.bAbortingExecution = false;
  local_e8.DepthCounter = '\0';
  local_e8.MostRecentProperty = (FProperty *)0x0;
  local_e8.MostRecentPropertyAddress = (uchar *)0x0;
  local_e8.FlowStack.ArrayMax = 8;
  local_e8.Node = param_2;
  local_e8.Object = param_1;
  local_e8.PropertyChainForCompiledIn = pFVar3;
  pFVar10 = FBlueprintContextTracker::Get();
  pTVar1 = &pFVar10->ScriptStack;
  local_f8[0] = &local_e8;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_f8) &&
     (lVar11 = (longlong)(pFVar10->ScriptStack).ArrayMax,
     (FScriptContainerElement *)local_f8 < pFVar4 + lVar11 * 8)) {
    local_110 = (longlong)(pFVar10->ScriptStack).ArrayNum;
    local_108 = 8;
    local_128 = local_f8;
    local_120 = pFVar4;
    local_118 = lVar11;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (pFVar10->ScriptStack).ArrayNum;
  piVar2 = &(pFVar10->ScriptStack).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar10->ScriptStack).ArrayNum = iVar7 + 1;
  *(FFrame **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_f8[0];
  local_e8.PreviousTrackingFrame = FFrame::PushThreadLocalTopStackFrame(&local_e8);
  if (local_e8.PreviousTrackingFrame != (FFrame *)0x0) {
    local_e8.bAbortingExecution =
         (bool)(local_e8.bAbortingExecution | (local_e8.PreviousTrackingFrame)->bAbortingExecution);
  }
  UFunction::Invoke(param_2,param_1,&local_e8,param_3);
  FFrame::~FFrame(&local_e8);
  return;
}

// PatchPropertyOffsets @ 1484179e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl FPropertyAccessSystem::PatchPropertyOffsets(FPropertyAccessLibrary *param_1)

{
  int *piVar1;
  TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_> *this;
  int iVar2;
  int iVar3;
  int iVar4;
  FPropertyAccessIndirection *pFVar5;
  FPropertyAccessIndirectionChain *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_> *local_res18;
  longlong local_res20;
  FResolveIndirectionsOnLoadContext local_e8;
  FResolveIndirectionsOnLoadContext local_98;
  undefined4 local_3c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&PropertyAccess::CriticalSection);
  piVar1 = &(param_1->Indirections).ArrayMax;
  pFVar5 = (FPropertyAccessIndirection *)(param_1->Indirections).AllocatorInstance.Data;
  iVar2 = (param_1->Indirections).ArrayNum;
  if ((param_1->Indirections).ArrayMax < 0) {
    DestructItems<FPropertyAccessIndirection,int>(pFVar5,iVar2);
    (param_1->Indirections).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(param_1->Indirections).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPropertyAccessIndirection,int>(pFVar5,iVar2);
    (param_1->Indirections).ArrayNum = 0;
  }
  uVar12 = 0;
  piVar1 = &(param_1->SrcAccesses).ArrayMax;
  iVar2 = (param_1->SrcPaths).ArrayNum;
  pFVar6 = (FPropertyAccessIndirectionChain *)(param_1->SrcAccesses).AllocatorInstance.Data;
  iVar3 = (param_1->SrcAccesses).ArrayNum;
  uVar13 = 0;
  if ((param_1->SrcAccesses).ArrayMax < 0) {
    DestructItems<FPropertyAccessIndirectionChain,int>(pFVar6,iVar3);
    (param_1->SrcAccesses).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(param_1->SrcAccesses).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPropertyAccessIndirectionChain,int>(pFVar6,iVar3);
    (param_1->SrcAccesses).ArrayNum = 0;
  }
  TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_>::SetNum
            (&param_1->SrcAccesses,iVar2,Default);
  iVar3 = (param_1->DestPaths).ArrayNum;
  this = &param_1->DestAccesses;
  piVar1 = &(param_1->DestAccesses).ArrayMax;
  pFVar6 = (FPropertyAccessIndirectionChain *)(this->AllocatorInstance).Data;
  iVar4 = (param_1->DestAccesses).ArrayNum;
  if ((param_1->DestAccesses).ArrayMax < 0) {
    DestructItems<FPropertyAccessIndirectionChain,int>(pFVar6,iVar4);
    (param_1->DestAccesses).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&this->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPropertyAccessIndirectionChain,int>(pFVar6,iVar4);
    (param_1->DestAccesses).ArrayNum = 0;
  }
  TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_>::SetNum(this,iVar3,Default);
  uVar9 = local_3c;
  if (0 < iVar2) {
    local_res18 = (TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_> *)0x0;
    uVar14 = uVar12;
    do {
      uVar16 = ~uVar14 >> 0x1f;
      uVar15 = uVar13;
      if ((int)uVar14 < (param_1->SrcPaths).ArrayNum) {
        uVar15 = uVar16;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar4 = *(int *)((param_1->SrcPaths).AllocatorInstance.Data + (longlong)local_res18 * 8 + 4);
      uVar15 = uVar13;
      if ((int)uVar14 < (param_1->SrcPaths).ArrayNum) {
        uVar15 = uVar16;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar15 = *(uint *)((param_1->SrcPaths).AllocatorInstance.Data + (longlong)local_res18 * 8);
      uVar11 = uVar13;
      if ((int)uVar15 < (param_1->PathSegments).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (param_1->PathSegments).AllocatorInstance.Data;
      if ((iVar4 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = uVar13;
      if ((int)uVar14 < (param_1->SrcAccesses).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_e8.Segments._12_4_ = uVar9;
      local_e8.Indirections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Indirections.ArrayNum = 0;
      local_e8.Indirections.ArrayMax = 0;
      local_e8.AccumulatedOffset = 0;
      local_e8.Access =
           (FPropertyAccessIndirectionChain *)
           ((param_1->SrcAccesses).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x28);
      local_e8.Segments.DataPtr = (FPropertyAccessSegment *)(pFVar7 + (longlong)(int)uVar15 * 0x40);
      local_e8.Segments.ArrayNum = iVar4;
      local_e8.Library = param_1;
      FText::FText(&local_e8.ErrorMessage);
      bVar10 = ResolveIndirectionsOnLoad(&local_e8);
      if (!bVar10) {
        DestructItems<FPropertyAccessIndirection,int>
                  ((FPropertyAccessIndirection *)local_e8.Indirections.AllocatorInstance.Data,
                   local_e8.Indirections.ArrayNum);
        bVar10 = local_e8.Indirections.ArrayMax != 0;
        local_e8.Indirections._8_8_ = (ulonglong)(uint)local_e8.Indirections.ArrayMax << 0x20;
        if (bVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,0,&local_e8.Indirections.AllocatorInstance,0,
                     &local_e8.Indirections.ArrayMax);
        }
        (local_e8.Access)->IndirectionEndIndex = -1;
        (local_e8.Access)->IndirectionStartIndex = -1;
      }
      if (local_e8.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.ErrorMessage.TextData.Reference + 0x10))();
      }
      DestructItems<FPropertyAccessIndirection,int>
                ((FPropertyAccessIndirection *)local_e8.Indirections.AllocatorInstance.Data,
                 local_e8.Indirections.ArrayNum);
      if ((FPropertyAccessIndirection *)local_e8.Indirections.AllocatorInstance.Data !=
          (FPropertyAccessIndirection *)0x0) {
        FMemory::Free(local_e8.Indirections.AllocatorInstance.Data);
      }
      uVar14 = uVar14 + 1;
      local_res18 = (TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_> *)
                    ((longlong)local_res18 + 1);
    } while ((longlong)local_res18 < (longlong)iVar2);
  }
  local_res18 = &param_1->DestAccesses;
  if (0 < iVar3) {
    local_res20 = 0;
    do {
      uVar15 = ~uVar12 >> 0x1f;
      uVar14 = uVar13;
      if ((int)uVar12 < (param_1->DestPaths).ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar2 = *(int *)((param_1->DestPaths).AllocatorInstance.Data + local_res20 * 8 + 4);
      uVar14 = uVar13;
      if ((int)uVar12 < (param_1->DestPaths).ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar14 = *(uint *)((param_1->DestPaths).AllocatorInstance.Data + local_res20 * 8);
      uVar16 = uVar13;
      if ((int)uVar14 < (param_1->PathSegments).ArrayNum) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (param_1->PathSegments).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = uVar13;
      if ((int)uVar12 < (param_1->DestAccesses).ArrayNum) {
        uVar16 = uVar15;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_98.Segments._12_4_ = local_3c;
      local_98.Indirections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Indirections.ArrayNum = 0;
      local_98.Indirections.ArrayMax = 0;
      local_98.AccumulatedOffset = 0;
      local_98.Access =
           (FPropertyAccessIndirectionChain *)
           ((local_res18->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x28);
      local_98.Segments.DataPtr = (FPropertyAccessSegment *)(pFVar7 + (longlong)(int)uVar14 * 0x40);
      local_98.Segments.ArrayNum = iVar2;
      local_98.Library = param_1;
      FText::FText(&local_98.ErrorMessage);
      bVar10 = ResolveIndirectionsOnLoad(&local_98);
      if (!bVar10) {
        DestructItems<FPropertyAccessIndirection,int>
                  ((FPropertyAccessIndirection *)local_98.Indirections.AllocatorInstance.Data,
                   local_98.Indirections.ArrayNum);
        bVar10 = local_98.Indirections.ArrayMax != 0;
        local_98.Indirections._8_8_ = (ulonglong)(uint)local_98.Indirections.ArrayMax << 0x20;
        if (bVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,0,&local_98.Indirections.AllocatorInstance,0,
                     &local_98.Indirections.ArrayMax);
        }
        (local_98.Access)->IndirectionEndIndex = -1;
        (local_98.Access)->IndirectionStartIndex = -1;
      }
      if (local_98.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.ErrorMessage.TextData.Reference + 0x10))();
      }
      DestructItems<FPropertyAccessIndirection,int>
                ((FPropertyAccessIndirection *)local_98.Indirections.AllocatorInstance.Data,
                 local_98.Indirections.ArrayNum);
      if ((FPropertyAccessIndirection *)local_98.Indirections.AllocatorInstance.Data !=
          (FPropertyAccessIndirection *)0x0) {
        FMemory::Free(local_98.Indirections.AllocatorInstance.Data);
      }
      uVar12 = uVar12 + 1;
      local_res20 = local_res20 + 1;
    } while (local_res20 < iVar3);
  }
  param_1->bHasBeenPostLoaded = true;
                    /* WARNING: Could not recover jumptable at 0x00014841802d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&PropertyAccess::CriticalSection);
  return;
}

// PerformCopy @ 148418050

void __cdecl
FPropertyAccessSystem::PerformCopy
          (FPropertyAccessCopy *param_1,FProperty *param_2,void *param_3,FProperty *param_4,
          void *param_5,TFunctionRef<void___cdecl(FProperty_const_*,void_*)> *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  FFieldClass *pFVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  UObject *pUVar12;
  FFieldClass *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  void *_Dst;
  void *_Src;
  void *pvVar16;
  void *pvVar17;
  FArrayProperty *pFVar18;
  FMapProperty *pFVar19;
  ulonglong uVar20;
  void *local_50;
  FProperty *local_48 [2];
  
  switch(param_1->Type) {
  case Plain:
    memcpy(param_5,param_3,(longlong)param_2->ElementSize);
    break;
  case Complex:
    if (param_5 != param_3) {
      if (((uint)(int)param_2->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(param_2->_padding_ + 0xf0))(param_2,param_5,param_3,param_2->ArrayDim);
      }
      else {
        memcpy(param_5,param_3,(longlong)param_2->ElementSize * (longlong)param_2->ArrayDim);
      }
    }
    break;
  case Bool:
    bVar11 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_2,param_3);
    if (((char)param_4[1]._padding_ == '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FieldSize != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0xa61,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = (ulonglong)*(byte *)((longlong)&param_4[1]._padding_ + 1);
    bVar1 = *(byte *)((longlong)&param_4[1]._padding_ + 3);
    if (bVar11) {
      *(byte *)(uVar20 + (longlong)param_5) =
           ~bVar1 & *(byte *)(uVar20 + (longlong)param_5) |
           *(byte *)((longlong)&param_4[1]._padding_ + 2);
    }
    else {
      *(byte *)(uVar20 + (longlong)param_5) = ~bVar1 & *(byte *)(uVar20 + (longlong)param_5);
    }
    break;
  case Struct:
    UScriptStruct::CopyScriptStruct((UScriptStruct *)param_4[1]._padding_,param_5,param_3,1);
    break;
  case Object:
    pUVar12 = (UObject *)(**(code **)(param_2->_padding_ + 0x1f8))(param_2,param_3);
    FObjectPropertyBase::SetObjectPropertyValue((FObjectPropertyBase *)param_4,param_5,pUVar12);
    break;
  case Name:
    *(undefined8 *)param_5 = *(undefined8 *)param_3;
    break;
  case Array:
    lVar8 = param_2[1]._padding_;
    (**(code **)(*(longlong *)param_2[1]._padding_ + 0x168))();
    lVar4 = param_2[1]._padding_;
    iVar2 = *(int *)(lVar4 + 0x34);
    if ((iVar2 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((lVar4 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar9 = param_4[1]._padding_;
    (**(code **)(*(longlong *)param_4[1]._padding_ + 0x168))();
    lVar4 = param_4[1]._padding_;
    iVar3 = *(int *)(lVar4 + 0x34);
    if ((iVar3 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((lVar4 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar14 = *(uint *)((longlong)param_5 + 8);
    if (*(int *)((longlong)param_3 + 8) < (int)*(uint *)((longlong)param_5 + 8)) {
      uVar14 = *(uint *)((longlong)param_3 + 8);
    }
    if (0 < (int)uVar14) {
      pvVar17 = (void *)0x0;
      uVar20 = (ulonglong)uVar14;
      pvVar16 = pvVar17;
      do {
        plVar5 = (longlong *)param_2[1]._padding_;
        _Src = pvVar17;
        if (*(int *)((longlong)param_3 + 8) != 0) {
          uVar15 = *(ulonglong *)param_3;
          if (((lVar8 & 1) != 0) && ((uVar15 & 1) != 0)) {
            uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)param_3;
          }
          _Src = (void *)((longlong)iVar2 * (longlong)pvVar16 + uVar15);
        }
        _Dst = pvVar17;
        if (*(int *)((longlong)param_5 + 8) != 0) {
          uVar15 = *(ulonglong *)param_5;
          if (((lVar9 & 1) != 0) && ((uVar15 & 1) != 0)) {
            uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)param_5;
          }
          _Dst = (void *)(uVar15 + (longlong)iVar3 * (longlong)pvVar16);
        }
        if (_Dst != _Src) {
          if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar5 + 0xf0))(plVar5,_Dst,_Src,1);
          }
          else {
            memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar5 + 0x34));
          }
        }
        pvVar16 = (void *)((longlong)pvVar16 + 1);
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    break;
  case PromoteBoolToByte:
    bVar11 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_2,param_3);
    *(bool *)param_5 = bVar11;
    break;
  case PromoteBoolToInt32:
    bVar11 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_2,param_3);
    *(uint *)param_5 = (uint)bVar11;
    break;
  case PromoteBoolToInt64:
    bVar11 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_2,param_3);
    *(ulonglong *)param_5 = (ulonglong)bVar11;
    break;
  case PromoteBoolToFloat:
    bVar11 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_2,param_3);
    *(float *)param_5 = (float)bVar11;
    break;
  case PromoteBoolToDouble:
    bVar11 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_2,param_3);
    *(double *)param_5 = (double)bVar11;
    break;
  case PromoteByteToInt32:
    *(uint *)param_5 = (uint)*(byte *)param_3;
    break;
  case PromoteByteToInt64:
    *(ulonglong *)param_5 = (ulonglong)*(byte *)param_3;
    break;
  case PromoteByteToFloat:
    *(float *)param_5 = (float)*(byte *)param_3;
    break;
  case PromoteByteToDouble:
    *(double *)param_5 = (double)*(byte *)param_3;
    break;
  case PromoteInt32ToInt64:
    *(longlong *)param_5 = (longlong)*(int *)param_3;
    break;
  case PromoteInt32ToFloat:
    *(float *)param_5 = (float)*(int *)param_3;
    break;
  case PromoteInt32ToDouble:
    *(double *)param_5 = (double)*(int *)param_3;
    break;
  case PromoteFloatToDouble:
    *(double *)param_5 = (double)*(float *)param_3;
    break;
  case DemoteDoubleToFloat:
    *(float *)param_5 = (float)*(double *)param_3;
    break;
  case PromoteArrayFloatToDouble:
    pFVar18 = (FArrayProperty *)0x0;
    if ((param_2 == (FProperty *)0x0) ||
       (pFVar6 = (FFieldClass *)param_2->_padding_, pFVar13 = FArrayProperty::StaticClass(),
       pFVar6 != pFVar13)) {
      param_2 = (FProperty *)pFVar18;
    }
    if ((param_4 != (FProperty *)0x0) &&
       (pFVar6 = (FFieldClass *)param_4->_padding_, pFVar13 = FArrayProperty::StaticClass(),
       pFVar6 == pFVar13)) {
      pFVar18 = (FArrayProperty *)param_4;
    }
    CopyAndCastFloatingPointArray<float,double>((FArrayProperty *)param_2,param_3,pFVar18,param_5);
    break;
  case DemoteArrayDoubleToFloat:
    pFVar18 = (FArrayProperty *)0x0;
    if ((param_2 == (FProperty *)0x0) ||
       (pFVar6 = (FFieldClass *)param_2->_padding_, pFVar13 = FArrayProperty::StaticClass(),
       pFVar6 != pFVar13)) {
      param_2 = (FProperty *)pFVar18;
    }
    if ((param_4 != (FProperty *)0x0) &&
       (pFVar6 = (FFieldClass *)param_4->_padding_, pFVar13 = FArrayProperty::StaticClass(),
       pFVar6 == pFVar13)) {
      pFVar18 = (FArrayProperty *)param_4;
    }
    CopyAndCastFloatingPointArray<double,float>((FArrayProperty *)param_2,param_3,pFVar18,param_5);
    break;
  case PromoteMapValueFloatToDouble:
    pFVar19 = (FMapProperty *)0x0;
    if ((param_2 == (FProperty *)0x0) ||
       (pFVar6 = (FFieldClass *)param_2->_padding_, pFVar13 = FMapProperty::StaticClass(),
       pFVar6 != pFVar13)) {
      param_2 = (FProperty *)pFVar19;
    }
    if ((param_4 != (FProperty *)0x0) &&
       (pFVar6 = (FFieldClass *)param_4->_padding_, pFVar13 = FMapProperty::StaticClass(),
       pFVar6 == pFVar13)) {
      pFVar19 = (FMapProperty *)param_4;
    }
    CopyAndCastFloatingPointMapValues<float,double>((FMapProperty *)param_2,param_3,pFVar19,param_5)
    ;
    break;
  case DemoteMapValueDoubleToFloat:
    pFVar19 = (FMapProperty *)0x0;
    if ((param_2 == (FProperty *)0x0) ||
       (pFVar6 = (FFieldClass *)param_2->_padding_, pFVar13 = FMapProperty::StaticClass(),
       pFVar6 != pFVar13)) {
      param_2 = (FProperty *)pFVar19;
    }
    if ((param_4 != (FProperty *)0x0) &&
       (pFVar6 = (FFieldClass *)param_4->_padding_, pFVar13 = FMapProperty::StaticClass(),
       pFVar6 == pFVar13)) {
      pFVar19 = (FMapProperty *)param_4;
    }
    CopyAndCastFloatingPointMapValues<double,float>((FMapProperty *)param_2,param_3,pFVar19,param_5)
    ;
    break;
  default:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PropertyAccess.cpp"
                        ,0x1a4,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_50 = param_5;
  local_48[0] = param_4;
  (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_48,&local_50);
  return;
}

// ProcessCopies @ 14841abe0

void __cdecl
FPropertyAccessSystem::ProcessCopies
          (UStruct *param_1,void *param_2,FPropertyAccessLibrary *param_3,int param_4)

{
  FPropertyAccessIndirectionChain *this;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FFieldClass *pFVar6;
  FProperty *pFVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  FPropertyAccessCopy *pFVar11;
  longlong lVar12;
  undefined1 local_res18 [16];
  code *local_80;
  undefined1 *local_78;
  <lambda_1> local_68;
  
  if (((param_3->bHasBeenPostLoaded != false) && (-1 < param_4)) &&
     (param_4 < (param_3->CopyBatchArray).ArrayNum)) {
    uVar9 = 0;
    if (param_4 < (param_3->CopyBatchArray).ArrayNum) {
      uVar9 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar8 = (longlong)param_4 * 0x10;
    uVar9 = 0;
    lVar10 = (longlong)*(int *)((param_3->CopyBatchArray).AllocatorInstance.Data + lVar8 + 8);
    if (0 < lVar10) {
      lVar12 = 0;
      do {
        local_78 = local_res18;
        local_80 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPropertyAccessSystem::ProcessCopies'::__l10::<lambda_1>,void,FProperty_const_*,void_*>
                   ::Call;
        if ((param_3->bHasBeenPostLoaded != false) && (param_4 < (param_3->CopyBatchArray).ArrayNum)
           ) {
          uVar4 = 0;
          if (param_4 < (param_3->CopyBatchArray).ArrayNum) {
            uVar4 = (uint)~param_4 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_3->CopyBatchArray).AllocatorInstance.Data;
          uVar4 = 0;
          if ((int)uVar9 < *(int *)(pFVar1 + lVar8 + 8)) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = (FPropertyAccessCopy *)(*(longlong *)(pFVar1 + lVar8) + lVar12);
          uVar4 = pFVar11->AccessIndex;
          uVar5 = 0;
          if ((int)uVar4 < (param_3->SrcAccesses).ArrayNum) {
            uVar5 = ~uVar4 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this = (FPropertyAccessIndirectionChain *)
                 ((param_3->SrcAccesses).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x28);
          pFVar6 = FProperty::StaticClass();
          pFVar7 = (FProperty *)FFieldPath::GetTyped((FFieldPath *)this,pFVar6,(UStruct *)0x0);
          if (pFVar7 != (FProperty *)0x0) {
            local_68.InPostCopyOperation =
                 (TFunctionRef<void___cdecl(FProperty_const_*,void_*)> *)&local_80;
            local_68.InContainer = param_2;
            local_68.InLibrary = param_3;
            local_68.Copy = pFVar11;
            local_68.SourceProperty = pFVar7;
            GetAccessAddress<_FPropertyAccessSystem::ProcessCopy_::__l11::<lambda_1>_>
                      (param_2,param_3,this,&local_68);
          }
        }
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}

// ProcessCopy @ 14841aec0

void __cdecl
FPropertyAccessSystem::ProcessCopy
          (UStruct *param_1,void *param_2,FPropertyAccessLibrary *param_3,int param_4,int param_5,
          TFunctionRef<void___cdecl(FProperty_const_*,void_*)> *param_6)

{
  FPropertyAccessIndirectionChain *this;
  code *pcVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  uint uVar4;
  FPropertyAccessCopy *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  <lambda_1> local_38;
  
  if (((param_3->bHasBeenPostLoaded != false) && (-1 < param_5)) &&
     (param_5 < (param_3->CopyBatchArray).ArrayNum)) {
    uVar4 = 0;
    if (param_5 < (param_3->CopyBatchArray).ArrayNum) {
      uVar4 = (uint)~param_5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = (param_3->CopyBatchArray).AllocatorInstance.Data + (longlong)param_5 * 0x10;
    uVar4 = 0;
    if (param_4 < *(int *)(pFVar6 + 8)) {
      uVar4 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = (FPropertyAccessCopy *)((longlong)param_4 * 0x10 + *(longlong *)pFVar6);
    uVar4 = pFVar5->AccessIndex;
    uVar7 = 0;
    if ((int)uVar4 < (param_3->SrcAccesses).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this = (FPropertyAccessIndirectionChain *)
           ((param_3->SrcAccesses).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x28);
    pFVar3 = FProperty::StaticClass();
    local_38.SourceProperty =
         (FProperty *)FFieldPath::GetTyped((FFieldPath *)this,pFVar3,(UStruct *)0x0);
    if (local_38.SourceProperty != (FProperty *)0x0) {
      local_38.InPostCopyOperation = param_6;
      local_38.InContainer = param_2;
      local_38.InLibrary = param_3;
      local_38.Copy = pFVar5;
      GetAccessAddress<_FPropertyAccessSystem::ProcessCopy_::__l11::<lambda_1>_>
                (param_2,param_3,this,&local_38);
    }
  }
  return;
}

// ResolveIndirectionsOnLoad @ 148421e50

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FPropertyAccessSystem::ResolveIndirectionsOnLoad(FResolveIndirectionsOnLoadContext *param_1)

{
  FFieldPath *this;
  FScriptContainerElement *pFVar1;
  int *piVar2;
  undefined4 uVar3;
  FPropertyAccessSegment *pFVar4;
  UObject *pUVar5;
  FPropertyAccessLibrary *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  FFieldClass *pFVar13;
  FField *pFVar14;
  FProperty *pFVar15;
  ushort uVar16;
  FPropertyAccessIndirectionChain *this_00;
  FFieldPath *pFVar17;
  FScriptContainerElement *pFVar18;
  TArray<FPropertyAccessIndirection,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  uint local_res8;
  longlong local_res10;
  longlong local_res18;
  
  iVar11 = (param_1->Segments).ArrayNum;
  uVar20 = 0;
  if (0 < iVar11) {
    local_res18 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar20 < iVar11) {
        uVar23 = ~uVar20 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pFVar4 = (param_1->Segments).DataPtr;
      iVar11 = (param_1->Segments).ArrayNum;
      this = (FFieldPath *)(&(pFVar4->Property).field_0x0 + local_res18);
      pFVar13 = FProperty::StaticClass();
      pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
      if (pFVar14 == (FField *)0x0) {
        return false;
      }
      uVar16 = *(ushort *)((longlong)&pFVar4->Flags + local_res18);
      if ((uVar16 & 0x8000) == 0) {
        uVar23 = *(uint *)((longlong)&pFVar4->ArrayIndex + local_res18);
        uVar22 = 0;
        if (uVar23 != 0xffffffff) {
          uVar22 = uVar23;
        }
        uVar16 = uVar16 & 0x7fff;
        switch(uVar16) {
        case 1:
        case 2:
          iVar11 = (param_1->Indirections).ArrayNum;
          piVar2 = &(param_1->Indirections).ArrayMax;
          if (iVar11 == *piVar2) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&(param_1->Indirections).AllocatorInstance,piVar2);
          }
          pFVar18 = (param_1->Indirections).AllocatorInstance.Data;
          (param_1->Indirections).ArrayNum = iVar11 + 1;
          pFVar18 = pFVar18 + (longlong)iVar11 * 0x40;
          DefaultConstructItems<FPropertyAccessIndirection,int>(pFVar18,1);
          pFVar13 = FProperty::StaticClass();
          pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
          *(uint *)(pFVar18 + 0x34) =
               uVar22 * *(int *)((longlong)&pFVar14[1]._padding_ + 4) +
               *(int *)((longlong)&pFVar14[1].Owner.Container + 4);
          pFVar18[0x39] = (FScriptContainerElement)0x0;
          break;
        case 3:
          iVar11 = (param_1->Indirections).ArrayNum;
          piVar2 = &(param_1->Indirections).ArrayMax;
          if (iVar11 == *piVar2) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&(param_1->Indirections).AllocatorInstance,piVar2);
          }
          pFVar18 = (param_1->Indirections).AllocatorInstance.Data;
          (param_1->Indirections).ArrayNum = iVar11 + 1;
          pFVar18 = pFVar18 + (longlong)iVar11 * 0x40;
          DefaultConstructItems<FPropertyAccessIndirection,int>(pFVar18,1);
          pFVar13 = FProperty::StaticClass();
          pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
          *(uint *)(pFVar18 + 0x34) =
               uVar22 * *(int *)((longlong)&pFVar14[1]._padding_ + 4) +
               *(int *)((longlong)&pFVar14[1].Owner.Container + 4);
          *(undefined2 *)(pFVar18 + 0x38) = 0x101;
          break;
        case 4:
          iVar11 = (param_1->Indirections).ArrayNum;
          piVar2 = &(param_1->Indirections).ArrayMax;
          if (iVar11 == *piVar2) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&(param_1->Indirections).AllocatorInstance,piVar2);
          }
          pFVar18 = (param_1->Indirections).AllocatorInstance.Data;
          (param_1->Indirections).ArrayNum = iVar11 + 1;
          pFVar18 = pFVar18 + (longlong)iVar11 * 0x40;
          DefaultConstructItems<FPropertyAccessIndirection,int>(pFVar18,1);
          pFVar13 = FProperty::StaticClass();
          pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
          *(uint *)(pFVar18 + 0x34) =
               uVar22 * *(int *)((longlong)&pFVar14[1]._padding_ + 4) +
               *(int *)((longlong)&pFVar14[1].Owner.Container + 4);
          *(undefined2 *)(pFVar18 + 0x38) = 0x102;
          break;
        case 5:
          iVar11 = (param_1->Indirections).ArrayNum;
          piVar2 = &(param_1->Indirections).ArrayMax;
          if (iVar11 == *piVar2) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&(param_1->Indirections).AllocatorInstance,piVar2);
          }
          pFVar18 = (param_1->Indirections).AllocatorInstance.Data;
          (param_1->Indirections).ArrayNum = iVar11 + 1;
          pFVar18 = pFVar18 + (longlong)iVar11 * 0x40;
          DefaultConstructItems<FPropertyAccessIndirection,int>(pFVar18,1);
          pFVar13 = FProperty::StaticClass();
          pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
          *(uint *)(pFVar18 + 0x34) =
               uVar22 * *(int *)((longlong)&pFVar14[1]._padding_ + 4) +
               *(int *)((longlong)&pFVar14[1].Owner.Container + 4);
          *(undefined2 *)(pFVar18 + 0x38) = 0x103;
          break;
        case 6:
        case 7:
        case 8:
          iVar12 = (param_1->Indirections).ArrayNum;
          if (iVar12 == (param_1->Indirections).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&(param_1->Indirections).AllocatorInstance,
                                &(param_1->Indirections).ArrayMax);
          }
          (param_1->Indirections).ArrayNum = iVar12 + 1;
          pFVar17 = (FFieldPath *)
                    ((param_1->Indirections).AllocatorInstance.Data + (longlong)iVar12 * 0x40);
          DefaultConstructItems<FPropertyAccessIndirection,int>(pFVar17,1);
          pFVar13 = FProperty::StaticClass();
          pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
          *(undefined4 *)((longlong)&pFVar17[1].Path.AllocatorInstance.Data + 4) =
               *(undefined4 *)((longlong)&pFVar14[1].Owner.Container + 4);
          *(undefined1 *)((longlong)&pFVar17[1].Path.ArrayNum + 1) = 2;
          pFVar13 = FProperty::StaticClass();
          pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
          if ((pFVar14 == (FField *)0x0) ||
             (((uint)(int)pFVar14->ClassPrivate->CastFlags >> 0x15 & 1) == 0)) {
            pFVar14 = (FField *)0x0;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
          }
          pFVar17->ResolvedField = pFVar14;
          FFieldPath::Generate(pFVar17,pFVar14);
          *(uint *)&pFVar17[1].Path.AllocatorInstance.Data = uVar22;
          if ((uVar16 == 8) && (uVar20 != iVar11 - 1U)) {
            iVar11 = (param_1->Indirections).ArrayNum;
            if (iVar11 == (param_1->Indirections).ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&(param_1->Indirections).AllocatorInstance,
                                  &(param_1->Indirections).ArrayMax);
            }
            (param_1->Indirections).ArrayNum = iVar11 + 1;
            pFVar18 = (param_1->Indirections).AllocatorInstance.Data + (longlong)iVar11 * 0x40;
            DefaultConstructItems<FPropertyAccessIndirection,int>(pFVar18,1);
            *(undefined4 *)(pFVar18 + 0x34) = 0;
            pFVar18[0x39] = (FScriptContainerElement)0x1;
            pFVar13 = FProperty::StaticClass();
            pFVar14 = FFieldPath::GetTyped(pFVar17,pFVar13,(UStruct *)0x0);
            if ((pFVar14 == (FField *)0x0) ||
               (((uint)(int)pFVar14->ClassPrivate->CastFlags >> 0x15 & 1) == 0)) {
              pFVar14 = (FField *)0x0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x472,L"CastFieldChecked failed with 0x%016llx");
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
            }
            pFVar14 = pFVar14[2].Next;
            if (pFVar14 != (FField *)0x0) {
              if (((uint)(int)pFVar14->ClassPrivate->CastFlags >> 0x10 & 1) == 0) {
                if (pFVar14 != (FField *)0x0) {
                  uVar3 = (undefined4)pFVar14->ClassPrivate->CastFlags;
                  if (((uint)uVar3 >> 0x1b & 1) == 0) {
                    if (((uint)uVar3 >> 0x1d & 1) != 0) {
                      pFVar18[0x38] = (FScriptContainerElement)0x3;
                    }
                  }
                  else {
                    pFVar18[0x38] = (FScriptContainerElement)0x2;
                  }
                }
              }
              else {
                pFVar18[0x38] = (FScriptContainerElement)0x1;
              }
            }
          }
          break;
        default:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PropertyAccess.cpp"
                             ,0xa8,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
        }
      }
      else {
        if (*(longlong *)((longlong)&(pFVar4->Function).field0_0x0 + local_res18) == 0) {
          return false;
        }
        iVar11 = (param_1->Indirections).ArrayNum;
        piVar2 = &(param_1->Indirections).ArrayMax;
        if (iVar11 == *piVar2) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&(param_1->Indirections).AllocatorInstance,piVar2);
        }
        pFVar18 = (param_1->Indirections).AllocatorInstance.Data;
        (param_1->Indirections).ArrayNum = iVar11 + 1;
        pFVar17 = (FFieldPath *)(pFVar18 + (longlong)iVar11 * 0x40);
        DefaultConstructItems<FPropertyAccessIndirection,int>(pFVar17,1);
        *(char *)((longlong)&pFVar17[1].Path.ArrayNum + 1) =
             ((*(uint *)(*(longlong *)((longlong)&(pFVar4->Function).field0_0x0 + local_res18) +
                        0xb0) & 0x400) != 0) + '\x03';
        uVar16 = *(ushort *)((longlong)&pFVar4->Flags + local_res18) & 0x7fff;
        if ((uVar16 == 1) || (uVar16 == 2)) {
          *(undefined1 *)&pFVar17[1].Path.ArrayNum = 0;
        }
        else if (uVar16 == 3) {
          *(undefined1 *)&pFVar17[1].Path.ArrayNum = 1;
        }
        else if (uVar16 == 4) {
          *(undefined1 *)&pFVar17[1].Path.ArrayNum = 2;
        }
        else if (uVar16 == 5) {
          *(undefined1 *)&pFVar17[1].Path.ArrayNum = 3;
        }
        else {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PropertyAccess.cpp"
                             ,0x4f,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 = *(UObject **)((longlong)&(pFVar4->Function).field0_0x0 + local_res18),
           pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pFVar17[1].ResolvedField =
             *(FField **)((longlong)&(pFVar4->Function).field0_0x0 + local_res18);
        pFVar15 = UFunction::GetReturnProperty
                            (*(UFunction **)((longlong)&(pFVar4->Function).field0_0x0 + local_res18)
                            );
        pFVar17->ResolvedField = (FField *)pFVar15;
        FFieldPath::Generate(pFVar17,(FField *)pFVar15);
        pFVar13 = FProperty::StaticClass();
        pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
        pFVar17[1].ResolvedOwner.WeakPtr.ObjectIndex =
             *(int *)((longlong)&pFVar14[1]._padding_ + 4) * (int)pFVar14[1]._padding_;
        pFVar13 = FProperty::StaticClass();
        pFVar14 = FFieldPath::GetTyped(this,pFVar13,(UStruct *)0x0);
        iVar11 = (**(code **)(pFVar14->_padding_ + 0x168))(pFVar14);
        pFVar17[1].ResolvedOwner.WeakPtr.ObjectSerialNumber = iVar11;
      }
      iVar11 = (param_1->Segments).ArrayNum;
      local_res18 = local_res18 + 0x40;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  local_res8 = 0;
  if (0 < (param_1->Indirections).ArrayNum) {
    local_res10 = 0;
    do {
      uVar20 = 0;
      if ((int)local_res8 < (param_1->Indirections).ArrayNum) {
        uVar20 = ~local_res8 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pFVar18 = (param_1->Indirections).AllocatorInstance.Data;
      if ((pFVar18[local_res10 + 0x39] == (FScriptContainerElement)0x0) &&
         (uVar20 = local_res8 + 1, lVar8 = local_res10,
         (int)uVar20 < (param_1->Indirections).ArrayNum)) {
        do {
          uVar23 = 0;
          if ((int)uVar20 < (param_1->Indirections).ArrayNum) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pFVar21 = (param_1->Indirections).AllocatorInstance.Data;
          if (pFVar21[lVar8 + 0x79] != (FScriptContainerElement)0x0) break;
          pFVar1 = pFVar18 + local_res10 + 0x34;
          *(int *)pFVar1 = *(int *)pFVar1 + *(int *)(pFVar21 + lVar8 + 0x74);
          uVar23 = 0;
          if ((int)uVar20 < (param_1->Indirections).ArrayNum) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pFVar21 = (param_1->Indirections).AllocatorInstance.Data + lVar8 + 0x40;
          if (*(void **)(pFVar21 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar21 + 0x10));
          }
          iVar11 = ~uVar20 + (param_1->Indirections).ArrayNum;
          if (iVar11 != 0) {
            memmove(pFVar21,pFVar21 + 0x40,(longlong)iVar11 << 6);
          }
          piVar2 = &(param_1->Indirections).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,&(param_1->Indirections).AllocatorInstance,
                     (param_1->Indirections).ArrayNum,&(param_1->Indirections).ArrayMax);
          uVar20 = uVar20 + 1;
          lVar8 = lVar8 + 0x40;
        } while ((int)uVar20 < (param_1->Indirections).ArrayNum);
      }
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 0x40;
    } while ((int)local_res8 < (param_1->Indirections).ArrayNum);
  }
  param_1->Access->IndirectionStartIndex = (param_1->Library->Indirections).ArrayNum;
  pFVar6 = param_1->Library;
  pTVar19 = &pFVar6->Indirections;
  if ((pTVar19 == &param_1->Indirections) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar11 = (param_1->Indirections).ArrayNum;
  if (iVar11 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40,8,iVar11,&pTVar19->AllocatorInstance,&(pFVar6->Indirections).ArrayNum,
                        &(pFVar6->Indirections).ArrayMax);
    ConstructItems<FPropertyAccessIndirection,FPropertyAccessIndirection,int>
              ((pTVar19->AllocatorInstance).Data + (longlong)iVar12 * 0x40,
               (FPropertyAccessIndirection *)(param_1->Indirections).AllocatorInstance.Data,iVar11);
  }
  param_1->Access->IndirectionEndIndex = (param_1->Library->Indirections).ArrayNum;
  iVar11 = (param_1->Segments).ArrayNum;
  uVar23 = iVar11 - 1;
  uVar20 = 0;
  if ((int)uVar23 < iVar11) {
    uVar20 = ~uVar23 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar11 = (param_1->Segments).ArrayNum;
  pFVar4 = (param_1->Segments).DataPtr;
  switch(pFVar4[(longlong)iVar11 + -1].Flags & 0x7fff) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    pFVar13 = FProperty::StaticClass();
    pFVar14 = FFieldPath::GetTyped
                        ((FFieldPath *)&pFVar4[(longlong)iVar11 + -1].Property,pFVar13,
                         (UStruct *)0x0);
    this_00 = param_1->Access;
    *(FField **)&this_00->Property = pFVar14;
    break;
  case 6:
  case 7:
  case 8:
    pFVar13 = FProperty::StaticClass();
    pFVar14 = FFieldPath::GetTyped
                        ((FFieldPath *)&pFVar4[(longlong)iVar11 + -1].Property,pFVar13,
                         (UStruct *)0x0);
    if (((pFVar14 == (FField *)0x0) ||
        (((uint)(int)pFVar14->ClassPrivate->CastFlags >> 0x15 & 1) == 0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx"),
       pFVar14 = (FField *)0x0, bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    this_00 = param_1->Access;
    pFVar14 = pFVar14[2].Next;
    *(FField **)&this_00->Property = pFVar14;
    break;
  default:
    goto switchD_1484227ec_default;
  }
  FFieldPath::Generate((FFieldPath *)this_00,pFVar14);
switchD_1484227ec_default:
  return true;
}

