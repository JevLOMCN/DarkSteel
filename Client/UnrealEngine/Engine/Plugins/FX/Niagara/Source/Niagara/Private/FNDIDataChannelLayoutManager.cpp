// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// Get @ 148e68700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FNDIDataChannelLayoutManager * __cdecl FNDIDataChannelLayoutManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FNDIDataChannelLayoutManager *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    _DAT_15526cc88 = 0;
    _DAT_15526cca0 = 0;
    _DAT_15526ccc0 = 0;
    _DAT_15526ccc8 = 0;
    _DAT_15526ccd0 = 0;
    DAT_15526ccd8 =
         &`private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    _DAT_15526cca8 = ___xmm_00000000ffffffff0000008000000000;
    uRam000000015526ccb0 = _UNK_150631d98;
    atexit(`TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FNDIDataChannelLayoutManager *)DAT_15526ccd8 == (FNDIDataChannelLayoutManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNDIDataChannelLayoutManager *)(*pcVar1)();
    return pFVar3;
  }
  return (FNDIDataChannelLayoutManager *)DAT_15526ccd8;
}

// GetLayoutInfo @ 148e6cd80

TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> * __thiscall
FNDIDataChannelLayoutManager::GetLayoutInfo
          (FNDIDataChannelLayoutManager *this,
          TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *__return_storage_ptr__,
          FNDIDataChannelFunctionInfo *param_1,FNiagaraDataSetCompiledData *param_2,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_3)

{
  FPlatformRWLock *SRWLock;
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  atomic<int> aVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *pTVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  FNDIDataChannel_FunctionToDataSetBinding *pFVar15;
  uint uVar16;
  uint local_78;
  undefined1 local_74 [12];
  FPlatformRWLock *local_68;
  FNDIDataChannel_FunctionToDataSetBinding *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  FNiagaraDataSetCompiledData *local_50;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *local_48;
  TReferenceControllerBase<1> *local_40;
  
  uVar7 = FNiagaraDataSetCompiledData::GetLayoutHash(param_2);
  uVar8 = ::GetTypeHash(param_1);
  uVar16 = uVar8 - uVar7 ^ uVar7 >> 0xd;
  uVar8 = (-0x61c88647 - uVar16) - uVar7 ^ uVar16 << 8;
  uVar14 = (uVar7 - uVar8) - uVar16 ^ uVar8 >> 0xd;
  uVar16 = (uVar16 - uVar14) - uVar8 ^ uVar14 >> 0xc;
  uVar7 = (uVar8 - uVar16) - uVar14 ^ uVar16 << 0x10;
  uVar8 = (uVar14 - uVar7) - uVar16 ^ uVar7 >> 5;
  uVar14 = (uVar16 - uVar8) - uVar7 ^ uVar8 >> 3;
  uVar7 = (uVar7 - uVar14) - uVar8 ^ uVar14 << 10;
  local_78 = (uVar8 - uVar7) - uVar14 ^ uVar7 >> 0xf;
  SRWLock = &this->FunctionToDataSetMapLock;
  local_68 = SRWLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (*(int *)&(this->FunctionToDataSetLayoutMap).field_0x8 !=
      *(int *)&(this->FunctionToDataSetLayoutMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->FunctionToDataSetLayoutMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->FunctionToDataSetLayoutMap).field_0x38;
    }
    uVar7 = *(uint *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->FunctionToDataSetLayoutMap).field_0x48 - 1U & local_78) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar7 * 0x20 +
                          *(longlong *)&this->FunctionToDataSetLayoutMap);
        if (*puVar12 == local_78) {
          pTVar10 = (TReferenceControllerBase<1> *)(puVar12 + 2);
          if (puVar12 == (uint *)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
          }
          if ((pTVar10 != (TReferenceControllerBase<1> *)0x0) &&
             ((FNDIDataChannel_FunctionToDataSetBinding *)pTVar10->_padding_ !=
              (FNDIDataChannel_FunctionToDataSetBinding *)0x0)) {
            __return_storage_ptr__->Object =
                 (FNDIDataChannel_FunctionToDataSetBinding *)pTVar10->_padding_;
            pTVar10 = *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
            if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
              UNLOCK();
            }
            ReleaseSRWLockShared((PSRWLOCK)SRWLock);
            return __return_storage_ptr__;
          }
          break;
        }
        uVar7 = puVar12[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pTVar10 = ::operator_new(0xa8);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pFVar15 = (FNDIDataChannel_FunctionToDataSetBinding *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = pTVar10 + 1;
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ = 0;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNDIDataChannel_FunctionToDataSetBinding___00_SharedPointerInternals__6B_
    ;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[3]._padding_ = 0;
    pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[4]._padding_ = 0;
    pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[5]._padding_ = 0;
    pTVar10[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData
              ((FNiagaraDataSetCompiledData *)(pTVar10 + 6));
    uVar7 = (param_1->FunctionName).Number;
    pTVar10[3].SharedReferenceCount = (atomic<int>)(param_1->FunctionName).ComparisonIndex.Value;
    pTVar10[3].WeakReferenceCount = (atomic<int>)uVar7;
    TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)(pTVar10 + 4),
               &param_1->Inputs);
    TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)(pTVar10 + 5),
               &param_1->Outputs);
    FNiagaraDataSetCompiledData::operator=((FNiagaraDataSetCompiledData *)(pTVar10 + 6),param_2);
    aVar9 = (atomic<int>)::GetTypeHash(param_1);
    pTVar10[2].WeakReferenceCount = aVar9;
    uVar7 = FNiagaraDataSetCompiledData::GetLayoutHash(param_2);
    *(uint *)&pTVar10[3]._padding_ = uVar7;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    if ((int)pTVar10[1].WeakReferenceCount < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)pTVar5,0,(int *)&pTVar10[1].WeakReferenceCount);
    }
    local_48 = param_3;
    local_50 = param_2;
    local_40 = pTVar5;
    `FNDIDataChannel_FunctionToDataSetBinding::FNDIDataChannel_FunctionToDataSetBinding'::__l2::
    <lambda_1>::operator()(&local_50,&param_1->Inputs);
    `FNDIDataChannel_FunctionToDataSetBinding::FNDIDataChannel_FunctionToDataSetBinding'::__l2::
    <lambda_1>::operator()(&local_50,&param_1->Outputs);
    pFVar15 = (FNDIDataChannel_FunctionToDataSetBinding *)(pTVar10 + 1);
    if ((pFVar15 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)(*pcVar4)();
      return pTVar11;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (pFVar15 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0) {
      local_74._4_8_ = &local_78;
      TSet<TTuple<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,0>,FDefaultSetAllocator>
                  *)this,(TKeyInitializer<unsigned_int_const_&> *)local_74,(bool *)(local_74 + 4));
      lVar3 = *(longlong *)&this->FunctionToDataSetLayoutMap;
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      pTVar5 = *(TReferenceControllerBase<1> **)
                ((longlong)(int)local_74._0_4_ * 0x20 + lVar3 + 0x10);
      puVar1 = (undefined8 *)((longlong)(int)local_74._0_4_ * 0x20 + 8 + lVar3);
      *puVar1 = 0;
      puVar1[1] = pTVar10;
      local_60 = pFVar15;
      pTStack_58 = pTVar10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      goto LAB_148e6d1cc;
    }
  }
  uVar7 = ::GetTypeHash(&pFVar15->DebugFunctionInfo);
  uVar8 = ::GetTypeHash(param_1);
  if (uVar7 == uVar8) {
    if (((((pFVar15->DebugFunctionInfo).FunctionName == param_1->FunctionName) &&
         (iVar2 = (pFVar15->DebugFunctionInfo).Inputs.ArrayNum, iVar2 == (param_1->Inputs).ArrayNum)
         ) && (bVar6 = CompareItems<FNiagaraVariableBase,int>
                                 ((FNiagaraVariableBase *)
                                  (pFVar15->DebugFunctionInfo).Inputs.AllocatorInstance.Data,
                                  (FNiagaraVariableBase *)(param_1->Inputs).AllocatorInstance.Data,
                                  iVar2), bVar6)) &&
       ((iVar2 = (pFVar15->DebugFunctionInfo).Outputs.ArrayNum, iVar2 == (param_1->Outputs).ArrayNum
        && (bVar6 = CompareItems<FNiagaraVariableBase,int>
                              ((FNiagaraVariableBase *)
                               (pFVar15->DebugFunctionInfo).Outputs.AllocatorInstance.Data,
                               (FNiagaraVariableBase *)(param_1->Outputs).AllocatorInstance.Data,
                               iVar2), bVar6)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FuncLayout->DebugFunctionInfo.CheckHashConflict(FunctionInfo) == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.cpp"
                           ,0xb3,
                           L"Key conflict. Function Information does not match that already placed at this key."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  uVar7 = FNiagaraDataSetCompiledData::GetLayoutHash(&pFVar15->DebugCompiledData);
  uVar8 = FNiagaraDataSetCompiledData::GetLayoutHash(param_2);
  if (uVar7 == uVar8) {
    iVar2 = (pFVar15->DebugCompiledData).Variables.ArrayNum;
    if ((iVar2 == (param_2->Variables).ArrayNum) &&
       (bVar6 = CompareItems<FNiagaraVariableBase,int>
                          ((FNiagaraVariableBase *)
                           (pFVar15->DebugCompiledData).Variables.AllocatorInstance.Data,
                           (FNiagaraVariableBase *)(param_2->Variables).AllocatorInstance.Data,iVar2
                          ), bVar6)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FuncLayout->DebugCompiledData.CheckHashConflict(DataSetLayout) == false"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.cpp"
                           ,0xb4,
                           L"Key conflict. DataSet Compiled Information does not match that already placed at this key."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
LAB_148e6d1cc:
  __return_storage_ptr__->Object = pFVar15;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  ReleaseSRWLockExclusive((PSRWLOCK)local_68);
  return __return_storage_ptr__;
}

// Reset @ 148e7be40

void __thiscall FNDIDataChannelLayoutManager::Reset(FNDIDataChannelLayoutManager *this)

{
  AcquireSRWLockExclusive((PSRWLOCK)&this->FunctionToDataSetMapLock);
  TSet<TTuple<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,0>,FDefaultSetAllocator>
           *)this);
                    /* WARNING: Could not recover jumptable at 0x000148e7be6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->FunctionToDataSetMapLock);
  return;
}

// TearDown @ 148e816e0

void __cdecl FNDIDataChannelLayoutManager::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_15526ccd8 = 0;
      atexit(`TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<FNDIDataChannelLayoutManager>::Reset
            ((TLazySingleton<FNDIDataChannelLayoutManager> *)
             &`private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

