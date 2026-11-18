// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 147a0ba40

UScriptStruct * __cdecl FKeyHandleMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKeyHandleMap.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKeyHandleMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleMap,(UObject *)pUVar1,L"KeyHandleMap");
  }
  return Z_Registration_Info_UScriptStruct_FKeyHandleMap.OuterSingleton;
}

// Add @ 147a2ec40

void __thiscall FKeyHandleMap::Add(FKeyHandleMap *this,FKeyHandle *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int local_res8 [2];
  int local_res18 [4];
  undefined1 local_c4 [20];
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
  *pTStack_90;
  FKeyHandleMap *local_88;
  undefined2 local_80;
  FScriptContainerElement *local_78;
  int *local_70;
  FKeyHandle *local_68;
  int *local_60;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  iVar5 = (this->KeyHandles).ArrayNum;
  local_res18[0] = param_2;
  if (iVar5 < param_2) {
    uVar10 = param_2 + 1;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = &(this->KeyHandles).ArrayMax;
    if ((this->KeyHandles).ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar10,&(this->KeyHandles).AllocatorInstance,iVar5,piVar1);
    }
    local_res8[0] = (this->KeyHandles).ArrayNum;
    if (local_res8[0] < local_res18[0]) {
      do {
        iVar5 = (this->KeyHandles).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->KeyHandles).AllocatorInstance,piVar1);
        }
        (this->KeyHandles).ArrayNum = iVar5 + 1;
        DefaultConstructItems<FKeyHandle,int>
                  ((this->KeyHandles).AllocatorInstance.Data + (longlong)iVar5 * 4,1);
        iVar5 = (this->KeyHandles).ArrayNum;
        uVar8 = iVar5 - 1;
        uVar10 = 0;
        if ((int)uVar8 < iVar5) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_78 = (this->KeyHandles).AllocatorInstance.Data +
                   (longlong)((this->KeyHandles).ArrayNum + -1) * 4;
        local_70 = local_res8;
        TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                  ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<FKeyHandle_const_&,int_const_&> *)(local_res18 + 2),
                   (bool *)&local_78);
        local_res8[0] = local_res8[0] + 1;
      } while (local_res8[0] < local_res18[0]);
    }
    pFVar9 = (this->KeyHandles).AllocatorInstance.Data;
    if (((pFVar9 <= param_1) && (param_1 < pFVar9 + (longlong)*piVar1 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->KeyHandles).ArrayNum;
    if (iVar5 == (this->KeyHandles).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->KeyHandles).AllocatorInstance,piVar1);
    }
    (this->KeyHandles).ArrayNum = iVar5 + 1;
    *(uint *)((this->KeyHandles).AllocatorInstance.Data + (longlong)iVar5 * 4) = param_1->Index;
  }
  else {
    if (param_2 < iVar5) {
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_58,
                 (TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                  *)this);
      local_80 = 0;
      stack0xffffffffffffff58 = local_58._16_16_;
      local_c4._12_8_ = local_58._0_8_;
      auStack_b0._0_8_ = local_58._8_8_;
      local_98 = local_38;
      pTStack_90 = pTStack_30;
      uVar7 = local_58._24_8_ >> 0x20;
      local_88 = this;
      if (local_58._28_4_ < *(int *)(local_58._16_8_ + 0x18)) {
        do {
          iVar5 = *(int *)(*(longlong *)local_c4._12_8_ + 4 + (longlong)(int)uVar7 * 0x10);
          if (local_res18[0] <= iVar5) {
            *(int *)(*(longlong *)local_c4._12_8_ + 4 + (longlong)(int)uVar7 * 0x10) = iVar5 + 1;
          }
          uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
          uVar7 = (ulonglong)uStack_9c;
        } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          iVar5 = 1;
          uVar10 = *(int *)&(local_88->KeyHandlesToIndices).field_0x8 -
                   *(int *)&(local_88->KeyHandlesToIndices).field_0x34;
          if (3 < uVar10) {
            uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar5 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar10) && (*(int *)&(local_88->KeyHandlesToIndices).field_0x48 < iVar5))
             || (iVar5 < *(int *)&(local_88->KeyHandlesToIndices).field_0x48)) {
            *(int *)&(local_88->KeyHandlesToIndices).field_0x48 = iVar5;
            TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                      *)local_88);
          }
        }
      }
    }
    iVar5 = local_res18[0];
    pFVar9 = (this->KeyHandles).AllocatorInstance.Data;
    if (((pFVar9 <= param_1) && (param_1 < pFVar9 + (longlong)(this->KeyHandles).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->KeyHandles).ArrayNum;
    piVar1 = &(this->KeyHandles).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->KeyHandles).AllocatorInstance,piVar1);
    }
    pFVar9 = (this->KeyHandles).AllocatorInstance.Data;
    (this->KeyHandles).ArrayNum = iVar6 + 1;
    lVar2 = (longlong)iVar5 * 4;
    pFVar9 = pFVar9 + lVar2;
    memmove(pFVar9 + 4,pFVar9,(longlong)(iVar6 - iVar5) << 2);
    *(uint *)((this->KeyHandles).AllocatorInstance.Data + lVar2) = param_1->Index;
  }
  local_60 = local_res18;
  local_68 = param_1;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
            ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FKeyHandle_const_&,int_const_&> *)local_c4,(bool *)&local_68)
  ;
  return;
}

// Empty @ 147a40410

void __thiscall FKeyHandleMap::Empty(FKeyHandleMap *this,int param_1)

{
  int *piVar1;
  
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Empty((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
         *)this,param_1);
  if (-1 < param_1) {
    piVar1 = &(this->KeyHandles).ArrayMax;
    (this->KeyHandles).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->KeyHandles).AllocatorInstance,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// EnsureAllIndicesHaveHandles @ 147a40920

void __thiscall FKeyHandleMap::EnsureAllIndicesHaveHandles(FKeyHandleMap *this,int param_1)

{
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  TPairInitializer<FKeyHandle_const_&,int_const_&> local_res8;
  FScriptContainerElement *local_38;
  int **local_30;
  
  iVar7 = (this->KeyHandles).ArrayNum;
  if (param_1 < iVar7) {
    pTVar1 = &this->KeyHandles;
    lVar12 = (longlong)param_1 * 4;
    uVar11 = (ulonglong)(uint)param_1;
    do {
      uVar8 = (uint)uVar11;
      uVar10 = 0;
      if ((int)uVar8 < (this->KeyHandles).ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)&(this->KeyHandlesToIndices).field_0x8 !=
          *(int *)&(this->KeyHandlesToIndices).field_0x34) {
        iVar7 = *(int *)((pTVar1->AllocatorInstance).Data + lVar12);
        puVar3 = *(undefined1 **)&(this->KeyHandlesToIndices).field_0x40;
        puVar9 = &(this->KeyHandlesToIndices).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar9 = puVar3;
        }
        iVar6 = *(int *)(puVar9 + ((longlong)*(int *)&(this->KeyHandlesToIndices).field_0x48 - 1U &
                                  (longlong)iVar7) * 4);
        if (iVar6 != -1) {
          do {
            if (*(int *)(*(longlong *)&this->KeyHandlesToIndices + (longlong)iVar6 * 0x10) == iVar7)
            {
              TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                               *)this,iVar6);
              break;
            }
            iVar6 = *(int *)(*(longlong *)&this->KeyHandlesToIndices + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
      uVar11 = (ulonglong)(uVar8 + 1);
      lVar12 = lVar12 + 4;
    } while ((int)(uVar8 + 1) < (this->KeyHandles).ArrayNum);
    iVar7 = (this->KeyHandles).ArrayNum;
    piVar2 = &(this->KeyHandles).ArrayNum;
    if (iVar7 < param_1) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,param_1 - iVar7,&pTVar1->AllocatorInstance,piVar2,
                         &(this->KeyHandles).ArrayMax);
      DefaultConstructItems<FKeyHandle,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4,param_1 - iVar7);
      return;
    }
    if (param_1 < 0) {
LAB_147a40c2f:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar7) {
      uVar10 = iVar7 - param_1;
      if (((int)(uVar10 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar10 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar7 = (*piVar2 - uVar10) - param_1;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 4,(longlong)iVar7 << 2);
        }
        *piVar2 = *piVar2 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,*piVar2,&(this->KeyHandles).ArrayMax);
        return;
      }
    }
  }
  else if (iVar7 < param_1) {
    if (param_1 < 0) goto LAB_147a40c2f;
    piVar2 = &(this->KeyHandles).ArrayMax;
    if ((this->KeyHandles).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->KeyHandles).AllocatorInstance,iVar7,piVar2);
    }
    for (local_res8.Value._0_4_ = (this->KeyHandles).ArrayNum; (int)local_res8.Value < param_1;
        local_res8.Value._0_4_ = (int)local_res8.Value + 1) {
      iVar7 = (this->KeyHandles).ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->KeyHandles).AllocatorInstance,piVar2);
      }
      (this->KeyHandles).ArrayNum = iVar7 + 1;
      DefaultConstructItems<FKeyHandle,int>
                ((this->KeyHandles).AllocatorInstance.Data + (longlong)iVar7 * 4,1);
      iVar7 = (this->KeyHandles).ArrayNum;
      uVar8 = iVar7 - 1;
      uVar10 = 0;
      if ((int)uVar8 < iVar7) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_38 = (this->KeyHandles).AllocatorInstance.Data +
                 (longlong)((this->KeyHandles).ArrayNum + -1) * 4;
      local_30 = &local_res8.Value;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                  *)this,&local_res8,(bool *)&local_38);
    }
  }
  return;
}

// EnsureIndexHasAHandle @ 147a40c60

void __thiscall FKeyHandleMap::EnsureIndexHasAHandle(FKeyHandleMap *this,int param_1)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  FKeyHandle *pFVar4;
  FKeyHandle local_res18 [4];
  
  pFVar4 = FindKey(this,param_1);
  if (pFVar4 == (FKeyHandle *)0x0) {
    LOCK();
    aVar2 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
    UNLOCK();
    local_res18[0].Index = (int)LastKeyHandleIndex + 1;
    LastKeyHandleIndex = aVar2;
    if (local_res18[0].Index == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                         ,0x1c,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Add(this,local_res18,param_1);
  }
  return;
}

// FindKey @ 147a452c0

FKeyHandle * __thiscall FKeyHandleMap::FindKey(FKeyHandleMap *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FKeyHandle *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->KeyHandles).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKeyHandle *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKeyHandle *)((this->KeyHandles).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return (FKeyHandle *)0x0;
}

// Initialize @ 147a5dc00

void __thiscall
FKeyHandleMap::Initialize(FKeyHandleMap *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint local_res8 [4];
  FScriptContainerElement *local_38;
  uint *local_30;
  
  uVar3 = param_1->ArrayNum;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Empty((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
         *)this,uVar3);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->KeyHandles).ArrayMax;
  (this->KeyHandles).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&(this->KeyHandles).AllocatorInstance,0,piVar1);
  }
  local_res8[0] = 0;
  if (0 < (int)uVar3) {
    do {
      uVar6 = local_res8[0];
      uVar8 = 0;
      if ((int)local_res8[0] < (int)uVar3) {
        uVar8 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (FScriptContainerElement *)(param_1->DataPtr + (int)uVar6);
      pFVar4 = (this->KeyHandles).AllocatorInstance.Data;
      if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->KeyHandles).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->KeyHandles).AllocatorInstance,piVar1);
      }
      (this->KeyHandles).ArrayNum = iVar9 + 1;
      *(undefined4 *)((this->KeyHandles).AllocatorInstance.Data + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar2;
      local_30 = local_res8;
      local_38 = pFVar2;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<FKeyHandle_const_&,int_const_&> *)(local_res8 + 2),
                 (bool *)&local_38);
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (int)uVar3);
  }
  return;
}

// Remove @ 147a7a2f0

void __thiscall FKeyHandleMap::Remove(FKeyHandleMap *this,FKeyHandle *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
  *pTStack_20;
  FKeyHandleMap *local_18;
  undefined2 local_10;
  
  uVar9 = 0xffffffff;
  if (*(int *)&(this->KeyHandlesToIndices).field_0x8 !=
      *(int *)&(this->KeyHandlesToIndices).field_0x34) {
    puVar8 = *(undefined1 **)&(this->KeyHandlesToIndices).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->KeyHandlesToIndices).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->KeyHandlesToIndices).field_0x48 - 1U & param_1->Index
                              ) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->KeyHandlesToIndices;
      do {
        lVar6 = (longlong)iVar5;
        if (*(uint *)(lVar2 + lVar6 * 0x10) == param_1->Index) {
          uVar9 = *(uint *)(lVar2 + 4 + lVar6 * 0x10);
          TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                           *)this,iVar5);
          bVar4 = true;
          goto LAB_147a7a35b;
        }
        iVar5 = *(int *)(lVar2 + 8 + lVar6 * 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = false;
LAB_147a7a35b:
  if (bVar4) {
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                *)this);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar7 = local_78._24_8_ >> 0x20;
    local_18 = this;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        iVar5 = *(int *)(*local_48 + 4 + (longlong)(int)uVar7 * 0x10);
        if ((int)uVar9 <= iVar5) {
          *(int *)(*local_48 + 4 + (longlong)(int)uVar7 * 0x10) = iVar5 + -1;
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar7 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_18->KeyHandlesToIndices).field_0x8 -
                 *(int *)&(local_18->KeyHandlesToIndices).field_0x34;
        if (uVar10 < 4) {
          iVar5 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar10) && (*(int *)&(local_18->KeyHandlesToIndices).field_0x48 < iVar5)) ||
           (iVar5 < *(int *)&(local_18->KeyHandlesToIndices).field_0x48)) {
          *(int *)&(local_18->KeyHandlesToIndices).field_0x48 = iVar5;
          TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                    *)local_18);
        }
      }
    }
    uVar10 = 0;
    if ((int)uVar9 < (this->KeyHandles).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->KeyHandles).ArrayNum + ~uVar9;
    _Dst = (this->KeyHandles).AllocatorInstance.Data + (longlong)(int)uVar9 * 4;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 4,(longlong)iVar5 << 2);
    }
    piVar1 = &(this->KeyHandles).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->KeyHandles).AllocatorInstance,(this->KeyHandles).ArrayNum,
               &(this->KeyHandles).ArrayMax);
  }
  return;
}

// Reserve @ 147a82fc0

void __thiscall FKeyHandleMap::Reserve(FKeyHandleMap *this,int param_1)

{
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Reserve((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
           *)this,param_1);
  if (-1 < param_1) {
    if ((this->KeyHandles).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->KeyHandles).AllocatorInstance,(this->KeyHandles).ArrayNum,
                 &(this->KeyHandles).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Serialize @ 147a87f40

bool __thiscall FKeyHandleMap::Serialize(FKeyHandleMap *this,FArchive *param_1)

{
  return true;
}

// SetKeyHandles @ 147a8f200

void __thiscall FKeyHandleMap::SetKeyHandles(FKeyHandleMap *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<unsigned_int> aVar4;
  bool bVar5;
  int iVar6;
  TPairInitializer<FKeyHandle_const_&,int_const_&> local_res8;
  int local_38 [2];
  int *local_30;
  int **local_28;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->KeyHandles).ArrayMax;
  if ((this->KeyHandles).ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&(this->KeyHandles).AllocatorInstance,(this->KeyHandles).ArrayNum,piVar1)
    ;
  }
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Reserve((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
           *)this,param_1);
  local_res8.Value._0_4_ = 0;
  if (0 < param_1) {
    do {
      LOCK();
      aVar4 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
      UNLOCK();
      local_38[0] = (int)LastKeyHandleIndex + 1;
      LastKeyHandleIndex = aVar4;
      if ((local_38[0] == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                             ,0x1c,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->KeyHandles).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->KeyHandles).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->KeyHandles).AllocatorInstance,piVar1);
        (this->KeyHandles).ArrayNum = iVar6;
      }
      (this->KeyHandles).ArrayNum = iVar6 + 1;
      *(int *)((this->KeyHandles).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_38[0];
      local_30 = local_38;
      local_28 = &local_res8.Value;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                  *)this,&local_res8,(bool *)&local_30);
      local_res8.Value._0_4_ = (int)local_res8.Value + 1;
    } while ((int)local_res8.Value < param_1);
  }
  return;
}

