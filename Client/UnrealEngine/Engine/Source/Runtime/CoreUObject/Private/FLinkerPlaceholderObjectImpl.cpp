// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FindPlaceholderContainer @ 1420b7280

UObject * __cdecl
FLinkerPlaceholderObjectImpl::FindPlaceholderContainer(FPlaceholderValuePropertyPath *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTlsAutoCleanup *pFVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  iVar1 = (param_1->PropertyChain).ArrayNum;
  if (iVar1 < 1) {
    return (UObject *)0x0;
  }
  uVar9 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar9 = ~(iVar1 - 1U) >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (UObject *)(*pcVar3)();
    return pUVar7;
  }
  pUVar8 = FFieldVariant::GetOwnerClass
                     ((FFieldVariant *)
                      ((param_1->PropertyChain).AllocatorInstance.Data +
                      (longlong)((param_1->PropertyChain).ArrayNum + -1) * 8));
  if ((pUVar8 != (UClass *)0x0) && (iVar1 = *(int *)(pFVar6 + 3), 0 < iVar1)) {
    uVar9 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar9 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UObject *)(*pcVar3)();
      return pUVar7;
    }
    iVar1 = (int)pUVar8->_padding_;
    pUVar7 = *(UObject **)((longlong)pFVar6[2] + -8 + (longlong)*(int *)(pFVar6 + 3) * 8);
    lVar10 = *(longlong *)&pUVar7->field_0x10;
    if ((iVar1 <= *(int *)(lVar10 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      return pUVar7;
    }
    uVar9 = *(int *)(pFVar6 + 3) - 2;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 * 8;
      while( true ) {
        uVar5 = 0;
        if ((int)uVar9 < *(int *)(pFVar6 + 3)) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) break;
        iVar1 = (int)pUVar8->_padding_;
        lVar2 = *(longlong *)&(*(UObject **)(lVar10 + (longlong)pFVar6[2]))->field_0x10;
        if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar8->_padding_)) {
          return *(UObject **)(lVar10 + (longlong)pFVar6[2]);
        }
        lVar10 = lVar10 + -8;
        uVar9 = uVar9 - 1;
        if ((int)uVar9 < 0) {
          return (UObject *)0x0;
        }
      }
      pcVar3 = (code *)swi(3);
      pUVar7 = (UObject *)(*pcVar3)();
      return pUVar7;
    }
  }
  return (UObject *)0x0;
}

// FindRawPlaceholderContainer @ 1420b77f0

void * __cdecl
FLinkerPlaceholderObjectImpl::FindRawPlaceholderContainer(FPlaceholderValuePropertyPath *param_1)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (0 < *(int *)(pFVar1 + 5)) {
    return *(void **)pFVar1[4];
  }
  return (void *)0x0;
}

// ResolvePlaceholderValues @ 1420d5080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FLinkerPlaceholderObjectImpl::ResolvePlaceholderValues
          (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *param_1,int param_2,uchar *param_3,
          UObject *param_4,UObject *param_5)

{
  byte bVar1;
  TObjectPtr<UClass> TVar2;
  code *pcVar3;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptSetHelper *pFVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FFieldClass *pFVar11;
  UClass *pUVar12;
  TObjectPtr<UClass>_u_0 TVar13;
  UObject *pUVar14;
  FFieldObjectUnion FVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  uchar *puVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStackY_158 [32];
  FFieldObjectUnion local_128;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *local_120;
  int local_118 [2];
  UObject *local_110;
  UObject *local_108;
  TScriptContainerIterator<FScriptSetHelper> local_f8;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  ulonglong local_d0;
  TObjectPtr<UClass>_u_0 local_c0;
  longlong local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  byte local_90;
  TObjectPtr<UClass>_u_0 local_88;
  ulonglong *local_80;
  longlong local_78;
  longlong lStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar24 = (ulonglong)param_2;
  local_108 = param_5;
  if (param_2 < 0) {
    return 0;
  }
  lVar22 = uVar24 * 8;
  local_120 = param_1;
  local_110 = param_4;
  local_d0 = uVar24;
  do {
    local_d0 = local_d0 - 1;
    lVar26 = lVar22 + -8;
    uVar23 = (uint)uVar24;
    uVar16 = 0;
    if ((int)uVar23 < param_1->ArrayNum) {
      uVar16 = ~uVar23 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
    local_128 = (FFieldObjectUnion)
                ((FFieldObjectUnion *)((param_1->AllocatorInstance).Data + lVar22))->Unknown;
    if ((((local_128.Unknown & 1) != 0) &&
        ((UObject *)(local_128.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_128.Unknown & 0xfffffffffffffffe));
    }
    pFVar11 = FProperty::StaticClass();
    bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pFVar11);
    if (!bVar6) {
      pUVar12 = Z_Construct_UClass_UProperty_NoRegister();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pUVar12);
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Property.IsA<FProperty>() || Property.IsA<UProperty>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                             ,0x4b,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
    }
    if (uVar23 == 0) {
      pFVar11 = FObjectPropertyBase::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pFVar11);
      if (bVar6) {
        FVar15 = local_128;
        if ((FObjectPropertyBase *)local_128.Field != (FObjectPropertyBase *)0x0)
        goto LAB_1420d5ba3;
      }
      else {
        FVar15.Field = (FField *)0x0;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReferencingProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                         ,0x53,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
LAB_1420d5ba3:
      pUVar14 = (UObject *)(**(code **)((FVar15.Field)->_padding_ + 0x1f8))(FVar15.Field,param_3);
      if (pUVar14 != local_110) {
        return 0;
      }
      FObjectPropertyBase::SetObjectPropertyValue
                ((FObjectPropertyBase *)FVar15.Field,param_3,local_108);
      return 1;
    }
    pFVar11 = FArrayProperty::StaticClass();
    bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pFVar11);
    FVar15 = local_128;
    if ((bVar6) && ((FObjectPropertyBase *)local_128.Field != (FObjectPropertyBase *)0x0)) {
      bVar1 = *(byte *)&((TObjectPtr<UClass> *)(local_128.Unknown + 0x70))->field0_0x0;
      (**(code **)(*(longlong *)((FObjectPropertyBase *)(local_128.Unknown + 0x78))->_padding_ +
                  0x168))();
      lVar22 = ((FObjectPropertyBase *)(FVar15.Unknown + 0x78))->_padding_;
      iVar8 = *(int *)(lVar22 + 0x34);
      if ((iVar8 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
      if ((lVar22 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
      pTVar4 = local_120;
      iVar18 = 0;
      for (iVar10 = 0; iVar10 < (int)*(ulonglong *)((longlong)param_3 + 8); iVar10 = iVar10 + 1) {
        if ((int)*(ulonglong *)((longlong)param_3 + 8) == 0) {
          puVar21 = (uchar *)0x0;
        }
        else {
          uVar24 = *(ulonglong *)param_3;
          if (((bVar1 & 1) != 0) && ((uVar24 & 1) != 0)) {
            uVar24 = (longlong)param_3 + ((longlong)uVar24 >> 0x18);
          }
          puVar21 = (uchar *)(uVar24 + (longlong)iVar8 * (longlong)iVar10);
        }
        iVar9 = ResolvePlaceholderValues(pTVar4,uVar23 - 1,puVar21,local_110,local_108);
        iVar18 = iVar18 + iVar9;
      }
      return iVar18;
    }
    pUVar12 = Z_Construct_UClass_UArrayProperty_NoRegister();
    bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pUVar12);
    if ((bVar6) && ((local_128.Unknown & 0xfffffffffffffffe) != 0)) {
      iVar8 = 0x78;
LAB_1420d5207:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                         ,iVar8,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
    }
    else {
      pFVar11 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pFVar11);
      FVar15.Field = (FField *)0x0;
      if (bVar6) {
        FVar15 = local_128;
      }
      if ((FObjectPropertyBase *)FVar15.Field != (FObjectPropertyBase *)0x0) {
        local_88 = (TObjectPtr<UClass>_u_0)
                   ((TObjectPtr<UClass>_u_0 *)(FVar15.Unknown + 0x70))->DebugPtr;
        local_68 = *(int *)(FVar15.Unknown + 0x88);
        local_78 = ((FObjectPropertyBase *)(FVar15.Unknown + 0x78))->_padding_;
        lStack_70 = *(longlong *)(FVar15.Unknown + 0x80);
        local_80 = (ulonglong *)param_3;
        if ((local_88 == (UClass *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementProp",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1653,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
        local_f8.Container = (FScriptSetHelper *)&local_88;
        local_f8.InternalIndex = -1;
        local_f8.LogicalIndex = -1;
        TScriptContainerIterator<FScriptSetHelper>::Advance(&local_f8);
        iVar8 = 0;
        break;
      }
      pUVar12 = Z_Construct_UClass_USetProperty_NoRegister();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pUVar12);
      if ((bVar6) && ((local_128.Unknown & 0xfffffffffffffffe) != 0)) {
        iVar8 = 0x91;
        goto LAB_1420d5207;
      }
      pFVar11 = FMapProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pFVar11);
      pTVar4 = local_120;
      FVar15.Field = (FField *)0x0;
      if (bVar6) {
        FVar15 = local_128;
      }
      if ((FObjectPropertyBase *)FVar15.Field != (FObjectPropertyBase *)0x0) {
        uVar25 = uVar23 - 1;
        uVar16 = 0;
        if ((int)uVar25 < local_120->ArrayNum) {
          uVar16 = ~uVar25 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
        TVar13.DebugPtr =
             (UClass *)
             FFieldVariant::Get<FProperty>
                       ((FFieldVariant *)
                        ((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar23 * 8 + -8));
        local_c0 = (TObjectPtr<UClass>_u_0)
                   ((TObjectPtr<UClass>_u_0 *)(FVar15.Unknown + 0x70))->DebugPtr;
        local_b8 = ((FObjectPropertyBase *)(FVar15.Unknown + 0x78))->_padding_;
        local_98 = *(longlong *)(FVar15.Unknown + 0x90);
        local_90 = *(byte *)(FVar15.Unknown + 0x98);
        local_a8 = *(longlong *)(FVar15.Unknown + 0x80);
        lStack_a0 = *(longlong *)(FVar15.Unknown + 0x88);
        if (((local_c0 == (UClass *)0x0) || (local_b8 == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InKeyProp && InValueProp",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1558,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
        local_b0 = (ulonglong *)param_3;
        if (((local_c0.DebugPtr == (UClass *)0x0) || (local_b8 == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("KeyProp && ValueProp",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1564,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
        iVar8 = 0;
        uVar24 = local_b0[1];
        if ((int)uVar24 < 1) goto LAB_1420d579d;
        goto LAB_1420d5781;
      }
      pUVar12 = Z_Construct_UClass_UMapProperty_NoRegister();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pUVar12);
      if ((bVar6) && ((local_128.Unknown & 0xfffffffffffffffe) != 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                           ,0xb1,L"");
        param_1 = local_120;
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
      }
      else {
        pFVar11 = FOptionalProperty::StaticClass();
        bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_128,pFVar11);
        param_1 = local_120;
        FVar15 = local_128;
        if ((bVar6) && ((FObjectPropertyBase *)local_128.Field != (FObjectPropertyBase *)0x0)) {
          cVar7 = (**(code **)(((TObjectPtr<UClass>_u_0 *)(local_128.Unknown + 0x70))->DebugPtr->
                               _padding_ + 0x1a8))();
          TVar2.field0_0x0 =
               (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)(FVar15.Unknown + 0x70))->DebugPtr
          ;
          lVar22 = *(longlong *)TVar2.field0_0x0;
          if (cVar7 == '\0') {
            cVar7 = (**(code **)(lVar22 + 0x1a8))();
            if ((cVar7 != '\0') &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                   ,0xa0,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              iVar8 = (*pcVar3)();
              return iVar8;
            }
            TVar2.field0_0x0 =
                 (TObjectPtr<UClass>_u_0)
                 ((TObjectPtr<UClass>_u_0 *)(FVar15.Unknown + 0x70))->DebugPtr;
            cVar7 = *(char *)((longlong)param_3 +
                             (longlong)
                             (*(int *)((longlong)TVar2.field0_0x0 + 0x34) *
                             *(int *)((longlong)TVar2.field0_0x0 + 0x30)));
          }
          else {
            cVar7 = (**(code **)(lVar22 + 0x1b8))(TVar2.field0_0x0,param_3);
          }
          puVar20 = (ulonglong *)0x0;
          if (cVar7 != '\0') {
            puVar20 = (ulonglong *)param_3;
          }
          if (puVar20 == (ulonglong *)0x0) {
            return 0;
          }
          iVar8 = ResolvePlaceholderValues
                            (local_120,uVar23 - 1,(uchar *)puVar20,local_110,local_108);
          return iVar8;
        }
        uVar16 = 0;
        if ((int)(uVar23 - 1) < local_120->ArrayNum) {
          uVar16 = -uVar23 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
        pFVar17 = (param_1->AllocatorInstance).Data + lVar26;
        pFVar11 = FProperty::StaticClass();
        bVar6 = FFieldVariant::IsA((FFieldVariant *)pFVar17,pFVar11);
        if ((bVar6) && (lVar22 = *(longlong *)pFVar17, lVar22 != 0)) {
          if ((*(int *)(lVar22 + 0x30) < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          if (((ulonglong *)param_3 == (ulonglong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          param_3 = (uchar *)((longlong)param_3 + (longlong)*(int *)(lVar22 + 0x44));
        }
        else {
          uVar16 = 0;
          if ((int)(uVar23 - 1) < param_1->ArrayNum) {
            uVar16 = -uVar23 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          pFVar17 = (param_1->AllocatorInstance).Data + lVar26;
          pUVar12 = Z_Construct_UClass_UProperty_NoRegister();
          bVar6 = FFieldVariant::IsA((FFieldVariant *)pFVar17,pUVar12);
          if ((bVar6) && (uVar24 = *(ulonglong *)pFVar17 & 0xfffffffffffffffe, uVar24 != 0)) {
            if ((*(int *)(uVar24 + 0x30) < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayIndex < ArrayDim",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealTypePrivate.h"
                                   ,0x71,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              iVar8 = (*pcVar3)();
              return iVar8;
            }
            if (((ulonglong *)param_3 == (ulonglong *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealTypePrivate.h"
                                   ,0x72,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              iVar8 = (*pcVar3)();
              return iVar8;
            }
            param_3 = (uchar *)((longlong)param_3 + (longlong)*(int *)(uVar24 + 0x44));
          }
        }
      }
    }
    uVar24 = (ulonglong)(uVar23 - 1);
    lVar22 = lVar26;
    if ((int)(uVar23 - 1) < 0) {
      return 0;
    }
  } while( true );
LAB_1420d5a00:
  pFVar5 = local_f8.Container;
  uVar16 = local_f8.InternalIndex;
  pUVar12 = ((TObjectPtr<UClass>_u_0 *)((longlong)local_f8.Container + 8))->DebugPtr;
  if (local_f8.InternalIndex < 0) {
    return iVar8;
  }
  if ((int)pUVar12->_padding_ <= local_f8.InternalIndex) {
    return iVar8;
  }
  if (((int)pUVar12->_padding_ <= local_f8.InternalIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x8c4,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return iVar8;
  }
  plVar19 = &pUVar12->_padding_;
  if ((longlong *)pUVar12->_padding_ != (longlong *)0x0) {
    plVar19 = (longlong *)pUVar12->_padding_;
  }
  uVar25 = uVar16;
  if ((int)uVar16 < 0) {
    uVar25 = uVar16 + 0x1f;
  }
  if ((*(uint *)((longlong)plVar19 + (longlong)((int)uVar25 >> 5) * 4) >> (uVar16 & 0x1f) & 1) == 0)
  {
    return iVar8;
  }
  iVar10 = local_f8.InternalIndex;
  pUVar12 = ((TObjectPtr<UClass>_u_0 *)((longlong)pFVar5 + 8))->DebugPtr;
  if (((int)uVar16 < 0) || ((int)pUVar12->_padding_ <= (int)uVar16)) {
LAB_1420d5aea:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
  }
  else {
    if (((int)pUVar12->_padding_ <= (int)uVar16) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x8c4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
    plVar19 = &pUVar12->_padding_;
    if ((longlong *)pUVar12->_padding_ != (longlong *)0x0) {
      plVar19 = (longlong *)pUVar12->_padding_;
    }
    uVar25 = uVar16 & 0x1f;
    if ((int)uVar16 < 0) {
      uVar16 = uVar16 + 0x1f;
    }
    if ((*(uint *)((longlong)plVar19 + (longlong)((int)uVar16 >> 5) * 4) >> uVar25 & 1) == 0)
    goto LAB_1420d5aea;
  }
  iVar10 = ResolvePlaceholderValues
                     (local_120,uVar23 - 1,(uchar *)((longlong)(local_68 * iVar10) + *local_80),
                      local_110,local_108);
  iVar8 = iVar8 + iVar10;
  TScriptContainerIterator<FScriptSetHelper>::Advance(&local_f8);
  goto LAB_1420d5a00;
  while (iVar8 = iVar8 + 1, iVar8 < (int)uVar24) {
LAB_1420d5781:
    local_e8 = iVar8;
    bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      ((FScriptMapHelper *)&local_c0.ObjectPtr,(<lambda_1> *)&local_e8);
    if (bVar6) break;
  }
LAB_1420d579d:
  iVar18 = 0;
  local_118[0] = iVar8;
  bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    ((FScriptMapHelper *)&local_c0.ObjectPtr,(<lambda_1> *)local_118);
  iVar10 = 0;
  if (bVar6) {
    do {
      iVar18 = iVar10;
      puVar20 = local_b0;
      if (TVar13.DebugPtr == ((TObjectPtr<UClass>_u_0 *)(FVar15.Unknown + 0x70))->DebugPtr) {
        if ((local_90 & 1) == 0) {
          local_e0 = iVar8;
          bVar6 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            ((FScriptMapHelper *)&local_c0.ObjectPtr,(<lambda_1> *)&local_e0);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1321,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          lVar22 = (longlong)(local_98._4_4_ * iVar8);
LAB_1420d592f:
          puVar21 = (uchar *)(lVar22 + *puVar20);
        }
        else {
          local_e4 = iVar8;
          bVar6 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            ((FScriptMapHelper *)&local_c0.ObjectPtr,(<lambda_1> *)&local_e4);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1321,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          uVar24 = *puVar20;
          if ((uVar24 & 1) != 0) {
            uVar24 = (longlong)puVar20 + ((longlong)uVar24 >> 0x18);
          }
          puVar21 = (uchar *)(uVar24 + (longlong)(local_98._4_4_ * iVar8));
        }
LAB_1420d5932:
        iVar10 = ResolvePlaceholderValues(local_120,uVar25,puVar21,local_110,local_108);
        iVar18 = iVar18 + iVar10;
      }
      else if (TVar13.DebugPtr ==
               (UClass *)((FObjectPropertyBase *)(FVar15.Unknown + 0x78))->_padding_) {
        if ((local_90 & 1) == 0) {
          local_d8 = iVar8;
          bVar6 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            ((FScriptMapHelper *)&local_c0.ObjectPtr,(<lambda_1> *)&local_d8);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x133f,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          lVar22 = (longlong)(local_98._4_4_ * iVar8) + (longlong)(int)local_a8;
          goto LAB_1420d592f;
        }
        local_dc = iVar8;
        bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)&local_c0.ObjectPtr,(<lambda_1> *)&local_dc);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x133f,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return iVar8;
        }
        uVar24 = *puVar20;
        if ((uVar24 & 1) != 0) {
          uVar24 = (longlong)puVar20 + ((longlong)uVar24 >> 0x18);
        }
        puVar21 = (uchar *)(uVar24 + (longlong)(int)local_a8 + (longlong)(local_98._4_4_ * iVar8));
        goto LAB_1420d5932;
      }
      uVar24 = local_b0[1];
      do {
        iVar8 = iVar8 + 1;
        if ((int)uVar24 <= iVar8) break;
        local_d4 = iVar8;
        bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)&local_c0.ObjectPtr,(<lambda_1> *)&local_d4);
      } while (!bVar6);
      local_118[0] = iVar8;
      bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        ((FScriptMapHelper *)&local_c0.ObjectPtr,(<lambda_1> *)local_118);
      iVar10 = iVar18;
    } while (bVar6);
  }
  return iVar18;
}

