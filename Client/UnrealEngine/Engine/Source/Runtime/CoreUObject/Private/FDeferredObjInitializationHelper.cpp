// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// operator() @ 141e8c6b0

bool __thiscall
`FDeferredObjInitializationHelper::DeferObjectInitializerIfNeeded'::__l5::<lambda_1>::operator()
          (void *this,FDeferredCdoInitializationTracker *param_1,UClass *param_2,UObject *param_3)

{
  bool bVar1;
  bool bVar2;
  FLinkerLoad *pFVar3;
  
  bVar2 = FDeferredInitializationTrackerBase::IsInitializationDeferred
                    ((FDeferredInitializationTrackerBase *)param_1,param_3);
  if (((bVar2) || ((*(uint *)&param_3->field_0x8 >> 10 & 1) != 0)) ||
     (((*(uint *)&param_3->field_0x8 >> 0x13 & 1) != 0 &&
      ((*(uint *)&param_3->field_0x8 >> 0x15 & 1) == 0)))) {
    pFVar3 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_2);
    if ((pFVar3 == (FLinkerLoad *)0x0) || ((pFVar3->LoadFlags & 0x100000) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((((uint)param_2->_padding_ >> 0x15 & 1) == 0) || (pFVar3 == (FLinkerLoad *)0x0)) ||
       ((pFVar3->DeferredCDOIndex == -1 && (pFVar3->bForceBlueprintFinalization == false)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar2) || (bVar1)) {
      return false;
    }
  }
  return true;
}

// DeferObjectInitializerIfNeeded @ 141e953d0

/* WARNING: Type propagation algorithm not settling */

FObjectInitializer * __cdecl
FDeferredObjInitializationHelper::DeferObjectInitializerIfNeeded(FObjectInitializer *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup *pFVar7;
  FObjectInitializer *pFVar8;
  TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *pTVar9;
  FObjectInitializer *pFVar10;
  FObjectInitializer *pFVar11;
  UObject *pUVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97 [7];
  code *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  
  pUVar12 = param_1->Obj;
  pFVar8 = (FObjectInitializer *)0x0;
  if (pUVar12 == (UObject *)0x0) {
    return (FObjectInitializer *)0x0;
  }
  if ((*(uint *)&pUVar12->field_0x8 >> 4 & 1) != 0) {
    pUVar5 = FObjectInitializer::GetClass(param_1);
    lVar2 = pUVar5->_padding_;
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4))
    ;
    if (((ulonglong)((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
      return (FObjectInitializer *)0x0;
    }
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar2 + 0xc));
    if (((ulonglong)((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
      return (FObjectInitializer *)0x0;
    }
    pUVar12 = param_1->ObjectArchetype;
    local_88 = local_res10;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FDeferredCdoInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar7 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,
                        &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredCdoInitializationTracker>::GetTlsSlot(void)'
                         ::__l2::TlsSlot);
    pFVar10 = (FObjectInitializer *)(pFVar7 + -0x21);
    if (pFVar7 == (FTlsAutoCleanup *)0x0) {
      pFVar10 = pFVar8;
    }
    bVar4 = `FDeferredObjInitializationHelper::DeferObjectInitializerIfNeeded'::__l5::<lambda_1>::
            operator()(local_res8,(FDeferredCdoInitializationTracker *)pFVar10,pUVar5,pUVar12);
    if (bVar4) {
      return (FObjectInitializer *)0x0;
    }
    goto LAB_141e956f1;
  }
  if ((*(uint *)&pUVar12->field_0x8 >> 0x16 & 1) == 0) {
    if ((*(uint *)&pUVar12->field_0x8 >> 0x12 & 1) == 0) {
      return (FObjectInitializer *)0x0;
    }
    lVar2 = *(longlong *)&pUVar12->field_0x10;
    if (lVar2 == 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2825597286833189942>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                         ,0xbca,"SubobjectClass");
      if (!bVar4) {
        return (FObjectInitializer *)0x0;
      }
      pcVar3 = (code *)swi(3);
      pFVar8 = (FObjectInitializer *)(*pcVar3)();
      return pFVar8;
    }
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar2 + 0xc));
    if (((ulonglong)((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
      return (FObjectInitializer *)0x0;
    }
    pUVar12 = *(UObject **)(lVar2 + 0x110);
    if (pUVar12 == (UObject *)0x0) {
      return (FObjectInitializer *)0x0;
    }
    if ((*(uint *)&pUVar12->field_0x8 >> 10 & 1) == 0) {
      if ((*(uint *)&pUVar12->field_0x8 >> 0x13 & 1) == 0) {
        return (FObjectInitializer *)0x0;
      }
      if ((*(uint *)&pUVar12->field_0x8 >> 0x15 & 1) != 0) {
        return (FObjectInitializer *)0x0;
      }
    }
    local_48 = local_97;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FDeferredSubObjInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pTVar9 = (TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50;
  }
  else {
    pFVar10 = *(FObjectInitializer **)&pUVar12->field_0x20;
    if (pFVar10 == (FObjectInitializer *)0x0) {
LAB_141e954fe:
      pFVar10 = pFVar8;
    }
    else {
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pFVar10->bCopyTransientsFromClassDefaults + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pFVar10->bCopyTransientsFromClassDefaults + 0x30) +
           (longlong)iVar1 * 8) != &pUVar5->_padding_)) goto LAB_141e954fe;
    }
    lVar2 = *(longlong *)
             ((pFVar10->SubobjectOverrides).Overrides.AllocatorInstance.InlineData + 0x20);
    if ((lVar2 != 0) &&
       (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar2 + 0xc)),
       ((ulonglong)((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) == 0)) {
      pUVar12 = *(UObject **)(lVar2 + 0x110);
      local_78 = local_res18;
      local_80 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FDeferredCdoInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar7 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,
                          &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredCdoInitializationTracker>::GetTlsSlot(void)'
                           ::__l2::TlsSlot);
      pFVar11 = (FObjectInitializer *)(pFVar7 + -0x21);
      if (pFVar7 == (FTlsAutoCleanup *)0x0) {
        pFVar11 = pFVar8;
      }
      bVar4 = `FDeferredObjInitializationHelper::DeferObjectInitializerIfNeeded'::__l5::<lambda_1>::
              operator()(local_res8,(FDeferredCdoInitializationTracker *)pFVar11,(UClass *)pFVar10,
                         pUVar12);
      if (!bVar4) {
        local_68 = local_res20;
        local_70 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FDeferredSubObjInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar7 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_70,
                            &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredSubObjInitializationTracker>::GetTlsSlot(void)'
                             ::__l2::TlsSlot);
        pFVar10 = (FObjectInitializer *)(pFVar7 + -0x21);
        if (pFVar7 == (FTlsAutoCleanup *)0x0) {
          pFVar10 = pFVar8;
        }
        pFVar8 = FDeferredInitializationTrackerBase::Add
                           ((FDeferredInitializationTrackerBase *)pFVar10,pUVar12,param_1);
        if (pFVar8 != (FObjectInitializer *)0x0) {
          return pFVar8;
        }
      }
    }
    pUVar12 = param_1->ObjectArchetype;
    if (pUVar12 == (UObject *)0x0) {
      return (FObjectInitializer *)0x0;
    }
    if ((*(uint *)&pUVar12->field_0x8 >> 10 & 1) == 0) {
      if ((*(uint *)&pUVar12->field_0x8 >> 0x13 & 1) == 0) {
        return (FObjectInitializer *)0x0;
      }
      if ((*(uint *)&pUVar12->field_0x8 >> 0x15 & 1) != 0) {
        return (FObjectInitializer *)0x0;
      }
    }
    local_58 = &local_98;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FDeferredSubObjInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pTVar9 = (TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60;
  }
  pFVar7 = FThreadSingletonInitializer::Get
                     (pTVar9,&`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredSubObjInitializationTracker>::GetTlsSlot(void)'
                              ::__l2::TlsSlot);
  pFVar10 = (FObjectInitializer *)(pFVar7 + -0x21);
  if (pFVar7 == (FTlsAutoCleanup *)0x0) {
    pFVar10 = (FObjectInitializer *)0x0;
  }
LAB_141e956f1:
  pFVar8 = FDeferredInitializationTrackerBase::Add
                     ((FDeferredInitializationTrackerBase *)pFVar10,pUVar12,param_1);
  return pFVar8;
}

// DeferObjectPreload @ 141e95730

bool __cdecl FDeferredObjInitializationHelper::DeferObjectPreload(UObject *param_1)

{
  char cVar1;
  FTlsAutoCleanup *pFVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FDeferredCdoInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredCdoInitializationTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  pFVar3 = pFVar2 + -0x21;
  if (pFVar2 == (FTlsAutoCleanup *)0x0) {
    pFVar3 = (FTlsAutoCleanup *)0x0;
  }
  cVar1 = (**(code **)((longlong)*pFVar3 + 8))(pFVar3,param_1);
  if (cVar1 == '\0') {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FDeferredSubObjInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar2 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                        &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredSubObjInitializationTracker>::GetTlsSlot(void)'
                         ::__l2::TlsSlot);
    pFVar3 = pFVar2 + -0x21;
    if (pFVar2 == (FTlsAutoCleanup *)0x0) {
      pFVar3 = (FTlsAutoCleanup *)0x0;
    }
    cVar1 = (**(code **)((longlong)*pFVar3 + 8))(pFVar3,param_1);
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// ResolveDeferredInitsFromArchetype @ 141eb9270

void __cdecl FDeferredObjInitializationHelper::ResolveDeferredInitsFromArchetype(UObject *param_1)

{
  FTlsAutoCleanup *pFVar1;
  FTlsAutoCleanup *pFVar2;
  FDeferredInitializationTrackerBase *pFVar3;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  code *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined1 *local_20;
  
  local_30 = local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FDeferredCdoInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredCdoInitializationTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FDeferredSubObjInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredSubObjInitializationTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  pFVar3 = (FDeferredInitializationTrackerBase *)(pFVar1 + -0x21);
  if (pFVar1 == (FTlsAutoCleanup *)0x0) {
    pFVar3 = (FDeferredInitializationTrackerBase *)0x0;
  }
  FDeferredInitializationTrackerBase::ResolveArchetypeInstances(pFVar3,param_1);
  pFVar3 = (FDeferredInitializationTrackerBase *)(pFVar2 + -0x21);
  if (pFVar2 == (FTlsAutoCleanup *)0x0) {
    pFVar3 = (FDeferredInitializationTrackerBase *)0x0;
  }
  FDeferredInitializationTrackerBase::ResolveArchetypeInstances(pFVar3,param_1);
  return;
}

