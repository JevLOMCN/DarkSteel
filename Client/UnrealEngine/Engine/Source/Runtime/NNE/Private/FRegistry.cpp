// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 4

// Add @ 1436e8130

/* WARNING: Enum "Type": Some values do not have unique names */

EResultStatus __thiscall
UE::NNE::FRegistry::Add(FRegistry *this,TWeakInterfacePtr<INNERuntime> *param_1)

{
  INNERuntime *pIVar1;
  code *pcVar2;
  bool bVar3;
  EResultStatus EVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  FString local_38;
  FString *local_28;
  TWeakInterfacePtr<INNERuntime> *local_20;
  
  if (((param_1->InterfaceInstance == (INNERuntime *)0x0) ||
      (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Runtime.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNE.cpp"
                         ,0x19,L"Runtime is not valid"), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if (((param_1->InterfaceInstance == (INNERuntime *)0x0) ||
      (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pIVar1 = param_1->InterfaceInstance;
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,&local_38);
  if ((local_38.Data.ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RuntimeName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNE.cpp"
                         ,0x1c,L"Runtime name is empty"), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if (local_38.Data.ArrayNum == 0) {
    pwVar7 = L"";
    local_38.Data.ArrayNum = 0;
  }
  else {
    local_38.Data.ArrayNum = local_38.Data.ArrayNum + -1;
    pwVar7 = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(local_38.Data.ArrayNum,pwVar7);
  iVar6 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
                      *)this,uVar5,&local_38);
  if (iVar6 == -1) {
    local_28 = &local_38;
    local_20 = param_1;
    TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TWeakInterfacePtr<INNERuntime>_const_&>_>
              ((TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,TWeakInterfacePtr<INNERuntime>_const_&> *)
                       &stack0x00000008,(bool *)&local_28);
    EVar4 = Ok;
  }
  else {
    if (2 < (byte)LogNNE._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_enum_UE::NNE::EResultStatus___cdecl_UE::NNE::FRegistry::Add(TWeakInterfacePtr<INNERuntime>)___ptr64'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&LogNNE);
    }
    EVar4 = Fail;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return EVar4;
}

// GetAllNames @ 1436e9020

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::NNE::FRegistry::GetAllNames
          (FRegistry *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *pTVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *local_res8;
  FScriptContainerElement *local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FString,TWeakInterfacePtr<INNERuntime>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TWeakInterfacePtr<INNERuntime>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>_>
              *)this,__return_storage_ptr__);
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar12 = pFVar2 + (longlong)__return_storage_ptr__->ArrayNum * 0x10;
  pFVar9 = pFVar2;
LAB_1436e9060:
  do {
    if (pFVar9 == pFVar12) {
LAB_1436e916b:
      iVar1 = __return_storage_ptr__->ArrayNum;
      uVar10 = (longlong)pFVar9 - (longlong)pFVar2 >> 4;
      uVar8 = (uint)uVar10;
      if (iVar1 < (int)uVar8) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,uVar8 - iVar1,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
        memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
               (longlong)(int)(uVar8 - iVar1) << 4);
      }
      else {
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(uVar10 & 0xffffffff);
        }
        if ((int)uVar8 < iVar1) {
          uVar11 = iVar1 - uVar8;
          if ((int)(uVar11 | uVar8) < 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar7;
            }
          }
          if (uVar11 != 0) {
            TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (__return_storage_ptr__,uVar8,uVar11);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                       __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          }
        }
      }
      return __return_storage_ptr__;
    }
    pTVar6 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
                     *)this,(FString *)pFVar9);
    if (pTVar6 == (TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (*(longlong *)&pTVar6->field_0x18 == 0) {
LAB_1436e90b5:
      local_res8 = pFVar9;
      bVar4 = ``UE::NNE::FRegistry::GetAllNames'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
              operator()(&local_res8);
      if (bVar4) goto LAB_1436e90c8;
      do {
        pFVar13 = pFVar12;
        pFVar12 = pFVar13 + -0x10;
        if (pFVar9 == pFVar12) goto LAB_1436e916b;
        pTVar6 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
                         *)this,(FString *)pFVar12);
        if (pTVar6 == (TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
        }
        if (*(longlong *)&pTVar6->field_0x18 != 0) {
          bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pTVar6->field_0x10);
          if (bVar4) break;
        }
        local_res10 = pFVar12;
        bVar4 = ``UE::NNE::FRegistry::GetAllNames'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>
                ::operator()(&local_res10);
      } while (!bVar4);
      if (*(void **)&pFVar9->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar9->field_0x0);
      }
      *(undefined8 *)&pFVar9->field_0x0 = *(undefined8 *)&pFVar12->field_0x0;
      *(undefined8 *)&pFVar12->field_0x0 = 0;
      *(undefined4 *)(pFVar9 + 8) = *(undefined4 *)(pFVar13 + -8);
      *(undefined4 *)(pFVar9 + 0xc) = *(undefined4 *)(pFVar13 + -4);
      pFVar9 = pFVar9 + 0x10;
      *(undefined8 *)(pFVar13 + -8) = 0;
      goto LAB_1436e9060;
    }
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pTVar6->field_0x10);
    if (!bVar4) goto LAB_1436e90b5;
LAB_1436e90c8:
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// GetInstance @ 1436e94e0

FRegistry * __cdecl UE::NNE::FRegistry::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::NNE::FRegistry::GetInstance'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'
          ::__l2::Instance;
}

// operator() @ 1504a16d0

bool __thiscall `UE::NNE::FRegistry::Get'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3353869485328039994>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<3353869485328039994>,
                         &`public:___cdecl_`public:_struct_TWeakInterfacePtr<INNERuntime>___cdecl_UE::NNE::FRegistry::Get(FString_const&___ptr64)const___ptr64'::`14'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

