// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 6

// DeregisterCallbacks @ 14dad3590

void __thiscall
FDataflowAddScalarVertexPropertyCallbackRegistry::DeregisterCallbacks
          (FDataflowAddScalarVertexPropertyCallbackRegistry *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8;
  
  FVar1 = *param_1;
  if (*(int *)&(this->AllCallbacks).field_0x8 != *(int *)&(this->AllCallbacks).field_0x34) {
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
                         *)this,FVar1.Number + uVar2,&local_res8);
  }
  return;
}

// Get @ 14dad51b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDataflowAddScalarVertexPropertyCallbackRegistry * __cdecl
FDataflowAddScalarVertexPropertyCallbackRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FDataflowAddScalarVertexPropertyCallbackRegistry *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FDataflowAddScalarVertexPropertyCallbackRegistry>&___ptr64___cdecl_TLazySingleton<FDataflowAddScalarVertexPropertyCallbackRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FDataflowAddScalarVertexPropertyCallbackRegistry>&___ptr64___cdecl_TLazySingleton<FDataflowAddScalarVertexPropertyCallbackRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FDataflowAddScalarVertexPropertyCallbackRegistry>&___ptr64___cdecl_TLazySingleton<FDataflowAddScalarVertexPropertyCallbackRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    _DAT_1553746b0 = 0;
    _DAT_1553746c8 = 0;
    _DAT_1553746e8 = 0;
    _DAT_1553746f0 = 0;
    DAT_1553746f8 =
         &`private:_static_class_TLazySingleton<class_FDataflowAddScalarVertexPropertyCallbackRegistry>&___ptr64___cdecl_TLazySingleton<FDataflowAddScalarVertexPropertyCallbackRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    _DAT_1553746d0 = ___xmm_00000000ffffffff0000008000000000;
    uRam00000001553746d8 = _UNK_150631d98;
    atexit(`TLazySingleton<FDataflowAddScalarVertexPropertyCallbackRegistry>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FDataflowAddScalarVertexPropertyCallbackRegistry>&___ptr64___cdecl_TLazySingleton<FDataflowAddScalarVertexPropertyCallbackRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_1553746f8 ==
       (TLazySingleton<class_FDataflowAddScalarVertexPropertyCallbackRegistry> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataflowAddScalarVertexPropertyCallbackRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (FDataflowAddScalarVertexPropertyCallbackRegistry *)DAT_1553746f8;
}

// GetRenderingParameters @ 14dad5c50

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowAddScalarVertexPropertyCallbackRegistry::GetRenderingParameters
          (FDataflowAddScalarVertexPropertyCallbackRegistry *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FDataflowAddScalarVertexPropertyCallbackRegistry *pFVar5;
  bool bVar6;
  uint uVar7;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  FRenderingParameter *pFVar13;
  uint uVar14;
  uint uVar15;
  FRenderingParameter *pFVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  FRenderingParameter *local_d8;
  int local_d0;
  FName *local_c8 [2];
  FRenderingParameter *local_b8;
  int local_b0;
  FDataflowAddScalarVertexPropertyCallbackRegistry *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  TBitArray<FDefaultBitArrayAllocator> *local_70;
  FDataflowAddScalarVertexPropertyCallbackRegistry *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AllCallbacks).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar10 = *(int *)&(this->AllCallbacks).field_0x28;
  iStack_a0 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  local_88 = iStack_a0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->AllCallbacks).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar19;
    }
    uVar15 = *puVar18;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14dad5d0d;
      uVar15 = puVar18[lVar11 + 1];
    }
    uStack_9c = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_78 = (int)lVar11;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar10 < iStack_8c) {
      iStack_8c = iVar10;
    }
  }
LAB_14dad5d0d:
  uVar15 = *(uint *)&(this->AllCallbacks).field_0x28;
  iStack_80 = *(int *)&(this->AllCallbacks).field_0x8 - *(int *)&(this->AllCallbacks).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = this;
  local_98 = (undefined1 *)pTVar19;
  iStack_84 = iStack_8c;
  local_70 = pTVar19;
  local_68 = this;
  TStack_60.Array = pTVar19;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar7 = *(uint *)&(this->AllCallbacks).field_0x28;
  if (uVar15 != uVar7) {
    puVar17 = *(undefined1 **)&(this->AllCallbacks).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar19;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dad5e10;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_74 = (int)lVar11;
    uVar15 = local_74 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_14dad5e10:
  do {
    pFVar5 = local_68;
    if (*(int *)&(local_68->AllCallbacks).field_0x8 - *(int *)&(local_68->AllCallbacks).field_0x34
        != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) && (TStack_60.Array == pTVar19)) && (pFVar5 == this))
    {
      return __return_storage_ptr__;
    }
    lVar2 = *(longlong *)&pFVar5->AllCallbacks;
    lVar11 = lVar2 + (longlong)TStack_60.CurrentBitIndex * 0x18;
    plVar3 = *(longlong **)(lVar2 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8);
    plVar3 = *(longlong **)(lVar11 + 8);
    (**(code **)(*plVar3 + 0x10))(plVar3,local_c8);
    iVar10 = (int)local_c8[1];
    if (local_b0 == iVar10) {
      uVar14 = 0;
      lVar11 = 0;
      if (0 < iVar10) {
        do {
          uVar7 = 0;
          if ((int)uVar14 < (int)local_c8[1]) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
          if (local_c8[0][lVar11] == *param_1) {
            uVar7 = 0;
            if ((int)uVar14 < local_b0) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)
                       (*pcVar4)();
              return pTVar8;
            }
            TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<UE::Dataflow::FRenderingParameter_const_&>
                      (__return_storage_ptr__,local_b8 + (int)uVar14);
          }
          uVar14 = uVar14 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar10);
      }
    }
    else if (local_c8[0] != local_c8[0] + iVar10) {
      pFVar9 = local_c8[0];
      do {
        if (*pFVar9 == *param_1) {
          if ((int)((longlong)pFVar9 - (longlong)local_c8[0] >> 3) != -1) {
            plVar3 = *(longlong **)(lVar11 + 8);
            (**(code **)(*plVar3 + 0x18))(plVar3,&local_d8);
            iVar10 = local_d0;
            pFVar16 = local_d8 + local_d0;
            pFVar13 = local_d8;
            while( true ) {
              if (local_d0 != iVar10) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<UE::Dataflow::FRenderingParameter,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_res20);
              }
              if (pFVar13 == pFVar16) break;
              TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<UE::Dataflow::FRenderingParameter_const_&>
                        (__return_storage_ptr__,pFVar13);
              pFVar13 = pFVar13 + 1;
            }
            DestructItems<UE::Dataflow::FRenderingParameter,int>(local_d8,local_d0);
            if (local_d8 != (FRenderingParameter *)0x0) {
              FMemory::Free(local_d8);
            }
          }
          break;
        }
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != local_c8[0] + iVar10);
    }
    if (local_c8[0] != (FName *)0x0) {
      FMemory::Free(local_c8[0]);
    }
    DestructItems<UE::Dataflow::FRenderingParameter,int>(local_b8,local_b0);
    if (local_b8 != (FRenderingParameter *)0x0) {
      FMemory::Free(local_b8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    pTVar19 = local_70;
  } while( true );
}

// GetRenderingParameters @ 14dad6060

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowAddScalarVertexPropertyCallbackRegistry::GetRenderingParameters
          (FDataflowAddScalarVertexPropertyCallbackRegistry *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FDataflowAddScalarVertexPropertyCallbackRegistry *pFVar7;
  bool bVar8;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  FRenderingParameter *pFVar12;
  uint uVar13;
  uint uVar14;
  FRenderingParameter *pFVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FRenderingParameter *local_a8;
  int local_a0;
  FDataflowAddScalarVertexPropertyCallbackRegistry *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FDataflowAddScalarVertexPropertyCallbackRegistry *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->AllCallbacks).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = *(int *)&(this->AllCallbacks).field_0x28;
  uStack_8c = 1;
  iStack_90 = 0;
  local_78 = 0;
  iStack_7c = iStack_90;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->AllCallbacks).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    local_78 = 0;
    iStack_90 = 0;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14dad610d;
      uVar14 = puVar17[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res18;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14dad610d:
  uVar14 = *(uint *)&(this->AllCallbacks).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&(this->AllCallbacks).field_0x8 - *(int *)&(this->AllCallbacks).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar9;
  }
  uVar4 = *(uint *)&(this->AllCallbacks).field_0x28;
  if (uVar14 != uVar4) {
    puVar16 = *(undefined1 **)&(this->AllCallbacks).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dad6210;
      uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14dad6210:
  while( true ) {
    pFVar7 = local_68;
    if (*(int *)&(local_68->AllCallbacks).field_0x8 - *(int *)&(local_68->AllCallbacks).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this))
    break;
    plVar5 = *(longlong **)
              (*(longlong *)&pFVar7->AllCallbacks + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_a8);
    iVar3 = local_a0;
    pFVar15 = local_a8 + local_a0;
    pFVar12 = local_a8;
    while( true ) {
      if (local_a0 != iVar3) {
        `TCheckedPointerIterator<UE::Dataflow::FRenderingParameter,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar12 == pFVar15) break;
      TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<UE::Dataflow::FRenderingParameter_const_&>(__return_storage_ptr__,pFVar12);
      pFVar12 = pFVar12 + 1;
    }
    DestructItems<UE::Dataflow::FRenderingParameter,int>(local_a8,local_a0);
    if (local_a8 != (FRenderingParameter *)0x0) {
      FMemory::Free(local_a8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// GetTargetGroupNames @ 14dad6720

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowAddScalarVertexPropertyCallbackRegistry::GetTargetGroupNames
          (FDataflowAddScalarVertexPropertyCallbackRegistry *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FDataflowAddScalarVertexPropertyCallbackRegistry *pFVar7;
  bool bVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  FName *pFVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FName *local_a8 [2];
  FDataflowAddScalarVertexPropertyCallbackRegistry *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FDataflowAddScalarVertexPropertyCallbackRegistry *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->AllCallbacks).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar10 = *(int *)&(this->AllCallbacks).field_0x28;
  uStack_8c = 1;
  iStack_90 = 0;
  local_78 = 0;
  iStack_7c = iStack_90;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->AllCallbacks).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    local_78 = 0;
    iStack_90 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14dad67cd;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_8c = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res18;
    if (iVar10 < iStack_7c) {
      iStack_7c = iVar10;
    }
  }
LAB_14dad67cd:
  uVar15 = *(uint *)&(this->AllCallbacks).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_70 = *(int *)&(this->AllCallbacks).field_0x8 - *(int *)&(this->AllCallbacks).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar9;
  }
  uVar4 = *(uint *)&(this->AllCallbacks).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->AllCallbacks).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dad68d0;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14dad68d0:
  while( true ) {
    pFVar7 = local_68;
    if (*(int *)&(local_68->AllCallbacks).field_0x8 - *(int *)&(local_68->AllCallbacks).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this))
    break;
    plVar5 = *(longlong **)
              (*(longlong *)&pFVar7->AllCallbacks + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(*plVar5 + 0x10))(plVar5,local_a8);
    iVar10 = (int)local_a8[1];
    pFVar2 = local_a8[0] + iVar10;
    pFVar13 = local_a8[0];
    while( true ) {
      if ((int)local_a8[1] != iVar10) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar13 == pFVar2) break;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (__return_storage_ptr__,pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    if (local_a8[0] != (FName *)0x0) {
      FMemory::Free(local_a8[0]);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// RegisterCallbacks @ 14dad7940

void __thiscall
FDataflowAddScalarVertexPropertyCallbackRegistry::RegisterCallbacks
          (FDataflowAddScalarVertexPropertyCallbackRegistry *this,
          TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>
          *param_1)

{
  TPairInitializer<FName_&&,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_&&>
  local_res8;
  undefined8 local_18;
  TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>
  *local_10;
  
  local_18 = (**(code **)((longlong)*param_1->Ptr + 8))(param_1->Ptr,&local_res8.Value);
  local_10 = param_1;
  TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_&&,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_&&>_>
            ((TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_18);
  return;
}

