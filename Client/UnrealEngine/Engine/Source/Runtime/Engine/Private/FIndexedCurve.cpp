// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 147a0d740

UScriptStruct * __cdecl FIndexedCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIndexedCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FIndexedCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIndexedCurve,(UObject *)pUVar1,L"IndexedCurve");
  }
  return Z_Registration_Info_UScriptStruct_FIndexedCurve.OuterSingleton;
}

// EnsureAllIndicesHaveHandles_Internal @ 147a40c40

void __thiscall FIndexedCurve::EnsureAllIndicesHaveHandles_Internal(FIndexedCurve *this,int param_1)

{
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FKeyHandleMap *this_00;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  TPairInitializer<FKeyHandle_const_&,int_const_&> TStackX_8;
  FScriptContainerElement *pFStack_38;
  int **ppiStack_30;
  
  this_00 = &this->KeyHandlesToIndices;
  if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 -
      *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34 == param_1) {
    return;
  }
  iVar7 = (this->KeyHandlesToIndices).KeyHandles.ArrayNum;
  if (param_1 < iVar7) {
    pTVar1 = &(this->KeyHandlesToIndices).KeyHandles;
    lVar12 = (longlong)param_1 * 4;
    uVar11 = (ulonglong)(uint)param_1;
    do {
      uVar8 = (uint)uVar11;
      uVar10 = 0;
      if ((int)uVar8 < (this->KeyHandlesToIndices).KeyHandles.ArrayNum) {
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
      if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 !=
          *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34) {
        iVar7 = *(int *)((pTVar1->AllocatorInstance).Data + lVar12);
        puVar3 = *(undefined1 **)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40;
        puVar9 = &(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar9 = puVar3;
        }
        iVar6 = *(int *)(puVar9 + ((longlong)
                                   *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.
                                            field_0x48 - 1U & (longlong)iVar7) * 4);
        if (iVar6 != -1) {
          do {
            if (*(int *)(*(longlong *)&this_00->KeyHandlesToIndices + (longlong)iVar6 * 0x10) ==
                iVar7) {
              TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                               *)this_00,iVar6);
              break;
            }
            iVar6 = *(int *)(*(longlong *)&this_00->KeyHandlesToIndices + 8 + (longlong)iVar6 * 0x10
                            );
          } while (iVar6 != -1);
        }
      }
      uVar11 = (ulonglong)(uVar8 + 1);
      lVar12 = lVar12 + 4;
    } while ((int)(uVar8 + 1) < (this->KeyHandlesToIndices).KeyHandles.ArrayNum);
    iVar7 = (this->KeyHandlesToIndices).KeyHandles.ArrayNum;
    piVar2 = &(this->KeyHandlesToIndices).KeyHandles.ArrayNum;
    if (iVar7 < param_1) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,param_1 - iVar7,&pTVar1->AllocatorInstance,piVar2,
                         &(this->KeyHandlesToIndices).KeyHandles.ArrayMax);
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
                  (4,4,&pTVar1->AllocatorInstance,*piVar2,
                   &(this->KeyHandlesToIndices).KeyHandles.ArrayMax);
        return;
      }
    }
  }
  else if (iVar7 < param_1) {
    if (param_1 < 0) goto LAB_147a40c2f;
    piVar2 = &(this->KeyHandlesToIndices).KeyHandles.ArrayMax;
    if ((this->KeyHandlesToIndices).KeyHandles.ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->KeyHandlesToIndices).KeyHandles.AllocatorInstance,iVar7,piVar2)
      ;
    }
    for (TStackX_8.Value._0_4_ = (this->KeyHandlesToIndices).KeyHandles.ArrayNum;
        (int)TStackX_8.Value < param_1; TStackX_8.Value._0_4_ = (int)TStackX_8.Value + 1) {
      iVar7 = (this->KeyHandlesToIndices).KeyHandles.ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->KeyHandlesToIndices).KeyHandles.AllocatorInstance,piVar2);
      }
      (this->KeyHandlesToIndices).KeyHandles.ArrayNum = iVar7 + 1;
      DefaultConstructItems<FKeyHandle,int>
                ((this->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data + (longlong)iVar7 * 4
                 ,1);
      iVar7 = (this->KeyHandlesToIndices).KeyHandles.ArrayNum;
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
      pFStack_38 = (this->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data +
                   (longlong)((this->KeyHandlesToIndices).KeyHandles.ArrayNum + -1) * 4;
      ppiStack_30 = &TStackX_8.Value;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                  *)this_00,&TStackX_8,(bool *)&pFStack_38);
    }
  }
  return;
}

// FindIndex @ 147a448d0

int * __thiscall FIndexedCurve::FindIndex(FIndexedCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  
  puVar5 = (uint *)0x0;
  puVar2 = puVar5;
  if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 !=
      *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x48
                                - 1U & param_1.Index) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 +
                         *(longlong *)&(this->KeyHandlesToIndices).KeyHandlesToIndices);
        if (*puVar2 == param_1.Index) break;
        uVar1 = puVar2[2];
        puVar2 = puVar5;
      } while (uVar1 != 0xffffffff);
    }
  }
  puVar3 = puVar2 + 1;
  if (puVar2 == (uint *)0x0) {
    puVar3 = puVar5;
  }
  return (int *)puVar3;
}

// GetIndex @ 147a51280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FIndexedCurve::GetIndex(FIndexedCurve *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = FindIndex(this,param_1);
  if (piVar4 != (int *)0x0) {
    return *piVar4;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("KeyIndex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                     ,0x49,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return _DAT_00000000;
}

// GetIndexSafe @ 147a51350

int __thiscall FIndexedCurve::GetIndexSafe(FIndexedCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  
  bVar1 = IsKeyHandleValid(this,param_1);
  if (!bVar1) {
    return -1;
  }
  puVar6 = (uint *)0x0;
  puVar3 = puVar6;
  if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 !=
      *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34) {
    puVar5 = *(undefined1 **)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x38;
    }
    uVar2 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x48
                                - 1U & param_1.Index) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar2 * 0x10 +
                         *(longlong *)&(this->KeyHandlesToIndices).KeyHandlesToIndices);
        if (*puVar3 == param_1.Index) break;
        uVar2 = puVar3[2];
        puVar3 = puVar6;
      } while (uVar2 != 0xffffffff);
    }
  }
  puVar4 = puVar3 + 1;
  if (puVar3 == (uint *)0x0) {
    puVar4 = puVar6;
  }
  return *puVar4;
}

// GetKeyHandle @ 147a51cb0

FKeyHandle __thiscall FIndexedCurve::GetKeyHandle(FIndexedCurve *this,int param_1)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FKeyHandle *pFVar6;
  undefined4 in_register_00000014;
  FKeyHandleMap *this_00;
  int in_R8D;
  FKeyHandle local_res18 [4];
  
  if (-1 < in_R8D) {
    iVar4 = (**(code **)(this->_padding_ + 8))();
    if (in_R8D < iVar4) {
      this_00 = &this->KeyHandlesToIndices;
      pFVar6 = FKeyHandleMap::FindKey(this_00,in_R8D);
      if (pFVar6 == (FKeyHandle *)0x0) {
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
            uVar5 = (*pcVar1)();
            return (FKeyHandle)uVar5;
          }
        }
        FKeyHandleMap::Add(this_00,local_res18,in_R8D);
      }
      pFVar6 = FKeyHandleMap::FindKey(this_00,in_R8D);
      *(uint *)CONCAT44(in_register_00000014,param_1) = pFVar6->Index;
      return (FKeyHandle)param_1;
    }
  }
  *(uint *)CONCAT44(in_register_00000014,param_1) = 0;
  return (FKeyHandle)param_1;
}

// GetNextKey @ 147a53e80

FKeyHandle __thiscall FIndexedCurve::GetNextKey(FIndexedCurve *this,FKeyHandle param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_register_00000014;
  FKeyHandle in_R8D;
  
  piVar3 = FindIndex(this,in_R8D);
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    iVar2 = (**(code **)(this->_padding_ + 8))(this);
    if (iVar1 + 1 < iVar2) {
      GetKeyHandle(this,param_1.Index);
      return (FKeyHandle)param_1.Index;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1.Index) = 0;
  return (FKeyHandle)param_1.Index;
}

// GetPreviousKey @ 147a56720

FKeyHandle __thiscall FIndexedCurve::GetPreviousKey(FIndexedCurve *this,FKeyHandle param_1)

{
  int *piVar1;
  undefined4 in_register_00000014;
  FKeyHandle in_R8D;
  
  piVar1 = FindIndex(this,in_R8D);
  if ((piVar1 != (int *)0x0) && (-1 < *piVar1 + -1)) {
    GetKeyHandle(this,param_1.Index);
    return (FKeyHandle)param_1.Index;
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1.Index) = 0;
  return (FKeyHandle)param_1.Index;
}

// IsKeyHandleValid @ 147a632f0

bool __thiscall FIndexedCurve::IsKeyHandleValid(FIndexedCurve *this,FKeyHandle param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 8))();
  if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 -
      *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34 != iVar1) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles(&this->KeyHandlesToIndices,iVar1);
  }
  piVar2 = FindIndex(this,param_1);
  if (((piVar2 != (int *)0x0) && (-1 < *piVar2)) && (*piVar2 < iVar1)) {
    return true;
  }
  return false;
}

// ScaleCurve @ 147a84230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FIndexedCurve::ScaleCurve(FIndexedCurve *this,float param_1,float param_2)

{
  ForElementType<unsigned_int> this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  ForAnyElementType FVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined1 auStackY_1a8 [32];
  uint local_178;
  uint uStack_174;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  FSparseArrayAllocationInfo local_d0;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  iVar4 = (**(code **)(this->_padding_ + 8))();
  if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 -
      *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34 != iVar4) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles(&this->KeyHandlesToIndices,iVar4);
  }
  puVar20 = (uint *)0x0;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  uVar13 = *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 -
           *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34;
  puVar12 = puVar20;
  if (uVar13 == 0) goto LAB_147a84510;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_b8,uVar13);
  if (uVar13 < 4) {
    uVar13 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar8 & 0x1f);
  }
  if ((local_70 != 0) && ((int)uVar13 <= (int)local_70)) goto LAB_147a84510;
  local_70 = uVar13;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
  }
  if (uVar13 != 0) {
    uVar14 = uVar13;
    if (uVar13 < 2) {
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_147a84347;
      }
    }
    else {
LAB_147a84347:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar14,4);
    }
    if (0 < (int)uVar13) {
      uVar19 = (ulonglong)uVar13;
      puVar16 = puVar20;
      do {
        FVar11.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_78.Data;
        }
        uVar7 = (ulonglong)puVar16 & (longlong)(int)uVar13 - 1U;
        puVar16 = (uint *)((longlong)puVar16 + 1);
        *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (local_70 != 0) {
    local_178 = 0;
    uStack_174 = 1;
    uStack_164 = 0;
    uStack_160 = 0;
    puVar16 = puVar20;
    if (local_90 != 0) {
      FVar18 = this_00;
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_98;
      }
      uVar13 = *(uint *)FVar18;
      puVar17 = puVar20;
      while (uVar13 == 0) {
        uStack_160 = (int)puVar17 + 0x20;
        puVar17 = (uint *)(ulonglong)uStack_160;
        iVar4 = (int)puVar16;
        local_178 = iVar4 + 1;
        puVar16 = (uint *)(ulonglong)local_178;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_178)
        goto LAB_147a84453;
        uVar13 = *(uint *)((uchar *)((longlong)FVar18 + 4) + (longlong)iVar4 * 4);
      }
      uStack_174 = -uVar13 & uVar13;
      uVar19 = (ulonglong)uStack_174 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uStack_164 = (int)lVar8 + -1 + uStack_160;
      puVar16 = (uint *)(ulonglong)uStack_164;
      if ((int)local_90 < (int)uStack_164) {
LAB_147a84453:
        puVar16 = (uint *)(ulonglong)local_90;
        uStack_164 = local_90;
      }
    }
    local_118._padding_ = CONCAT44(uStack_174,local_178);
    local_118.CurrentBitIndex = uStack_164;
    local_118.UnvisitedBitMask = 0xffffffff;
    local_118._28_4_ = uStack_15c;
    local_118.BaseBitIndex = uStack_160;
    local_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    if ((int)puVar16 < (int)local_90) {
      do {
        lVar8 = (longlong)(int)puVar16;
        uVar13 = local_70 - 1 & *(uint *)(local_b8._0_8_ + lVar8 * 0xc);
        *(uint *)(local_b8._0_8_ + lVar8 * 0xc + 8) = uVar13;
        FVar11.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_78.Data;
        }
        uVar19 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(local_b8._0_8_ + lVar8 * 0xc + 4) =
             *(undefined4 *)(FVar11.Data + uVar19 * 4);
        *(int *)(FVar11.Data + uVar19 * 4) = (int)puVar16;
        local_118.UnvisitedBitMask = local_118.UnvisitedBitMask & ~local_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
        puVar16 = (uint *)(ulonglong)(uint)local_118.CurrentBitIndex;
      } while (local_118.CurrentBitIndex < *(int *)((longlong)local_118.Array + 0x18));
    }
  }
LAB_147a84510:
  do {
    iVar4 = (int)puVar12;
    if ((iVar4 < 0) || ((this->KeyHandlesToIndices).KeyHandles.ArrayNum <= iVar4)) {
      ScaleCurve(this,param_1,param_2,
                 (TSet<FKeyHandle,DefaultKeyFuncs<FKeyHandle,0>,FDefaultSetAllocator> *)local_b8);
      local_70 = 0;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      iVar4 = SUB84(local_b8._8_8_,4);
      local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
      }
      local_88 = -1;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
      }
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98);
      }
      if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b8._0_8_);
      }
      return;
    }
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data;
    if (local_84 == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_b8,(int *)(local_b8 + 8),
                         (int *)(local_b8 + 0xc));
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
      FVar18 = this_00;
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_98;
      }
      bVar10 = (byte)iVar6 & 0x1f;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
        bVar10 = bVar10 - 0x20;
      }
      puVar12 = (uint *)((longlong)FVar18 + (longlong)(iVar6 >> 5) * 4);
      *puVar12 = *puVar12 & ~(1 << (bVar10 & 0x1f));
      iVar6 = local_88;
    }
    else {
      iVar6 = *(int *)(local_b8._0_8_ + (longlong)local_88 * 0xc + 4);
      local_84 = local_84 + -1;
      iVar5 = local_88;
      if (local_84 != 0) {
        *(undefined4 *)(local_b8._0_8_ + (longlong)iVar6 * 0xc) = 0xffffffff;
      }
    }
    local_88 = iVar6;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,&local_d0,iVar5);
    puVar12 = puVar20;
    if (local_d0.Pointer != (uint *)0x0) {
      *(uint *)local_d0.Pointer = *(uint *)(pFVar1 + (longlong)iVar4 * 4);
      *(uint *)((longlong)local_d0.Pointer + 4) = 0xffffffff;
      puVar12 = local_d0.Pointer;
    }
    uVar13 = *puVar12;
    if ((local_b8._8_4_ - local_84 != 1) && (local_b8._8_4_ != local_84)) {
      FVar11.Data = local_80;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_78.Data;
      }
      for (iVar5 = *(int *)(FVar11.Data + (ulonglong)(local_70 - 1 & uVar13) * 4); iVar5 != -1;
          iVar5 = *(int *)(local_b8._0_8_ + (longlong)iVar5 * 0xc + 4)) {
        if (*(uint *)(local_b8._0_8_ + (longlong)iVar5 * 0xc) == uVar13) {
          if (iVar5 != -1) {
            *(uint *)(local_b8._0_8_ + (longlong)iVar5 * 0xc) = uVar13;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_b8,local_d0.Index,1);
            goto LAB_147a84907;
          }
          break;
        }
      }
    }
    uVar15 = local_b8._8_4_ - local_84;
    uVar14 = 1;
    if (3 < uVar15) {
      uVar19 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar15 < 1) || ((int)uVar14 <= (int)local_70)) {
      uVar13 = local_70 - 1 & uVar13;
      puVar12[2] = uVar13;
      FVar11.Data = local_80;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_78.Data;
      }
      uVar19 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar13;
      puVar12[1] = *(uint *)(FVar11.Data + uVar19 * 4);
      *(int *)(FVar11.Data + uVar19 * 4) = local_d0.Index;
    }
    else {
      local_70 = uVar14;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
      }
      if (uVar14 != 0) {
        uVar13 = uVar14;
        if (uVar14 < 2) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_147a84733;
          }
        }
        else {
LAB_147a84733:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar13,4)
          ;
        }
        if (0 < (int)uVar14) {
          uVar19 = (ulonglong)uVar14;
          puVar12 = puVar20;
          do {
            FVar11.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_78.Data;
            }
            uVar7 = (ulonglong)puVar12 & (longlong)(int)uVar14 - 1U;
            puVar12 = (uint *)((longlong)puVar12 + 1);
            *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (local_70 != 0) {
        local_158 = 0;
        uStack_154 = 1;
        uStack_144 = 0;
        uStack_140 = 0;
        puVar12 = puVar20;
        if (local_90 != 0) {
          FVar18 = this_00;
          if (local_98 != (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_98;
          }
          uVar13 = *(uint *)FVar18;
          puVar16 = puVar20;
          while (uVar13 == 0) {
            uStack_140 = (int)puVar16 + 0x20;
            puVar16 = (uint *)(ulonglong)uStack_140;
            iVar5 = (int)puVar12;
            local_158 = iVar5 + 1;
            puVar12 = (uint *)(ulonglong)local_158;
            if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_158)
            goto LAB_147a84842;
            uVar13 = *(uint *)((uchar *)((longlong)FVar18 + 4) + (longlong)iVar5 * 4);
          }
          uStack_154 = -uVar13 & uVar13;
          uVar19 = (ulonglong)uStack_154 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uStack_144 = (int)lVar8 + -1 + uStack_140;
          puVar12 = (uint *)(ulonglong)uStack_144;
          if ((int)local_90 < (int)uStack_144) {
LAB_147a84842:
            puVar12 = (uint *)(ulonglong)local_90;
            uStack_144 = local_90;
          }
        }
        local_f8 = (longlong *)local_b8;
        local_f0._padding_ = CONCAT44(uStack_154,local_158);
        local_f0.CurrentBitIndex = uStack_144;
        local_f0.UnvisitedBitMask = 0xffffffff;
        local_f0._28_4_ = uStack_13c;
        local_f0.BaseBitIndex = uStack_140;
        local_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
        if ((int)puVar12 < (int)local_90) {
          do {
            lVar8 = *local_f8;
            lVar9 = (longlong)(int)puVar12;
            uVar13 = local_70 - 1 & *(uint *)(lVar8 + lVar9 * 0xc);
            *(uint *)(lVar8 + 8 + lVar9 * 0xc) = uVar13;
            FVar11.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_78.Data;
            }
            uVar19 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar13;
            *(undefined4 *)(lVar8 + 4 + lVar9 * 0xc) = *(undefined4 *)(FVar11.Data + uVar19 * 4);
            *(int *)(FVar11.Data + uVar19 * 4) = (int)puVar12;
            local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
            puVar12 = (uint *)(ulonglong)(uint)local_f0.CurrentBitIndex;
          } while (local_f0.CurrentBitIndex < *(int *)((longlong)local_f0.Array + 0x18));
        }
      }
    }
LAB_147a84907:
    puVar12 = (uint *)(ulonglong)(iVar4 + 1);
  } while( true );
}

// ScaleCurve @ 147a84a00

void __thiscall
FIndexedCurve::ScaleCurve
          (FIndexedCurve *this,float param_1,float param_2,
          TSet<FKeyHandle,DefaultKeyFuncs<FKeyHandle,0>,FDefaultSetAllocator> *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  TSet<FKeyHandle,DefaultKeyFuncs<FKeyHandle,0>,FDefaultSetAllocator> *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  uint uStack_54;
  uint local_50;
  int iStack_4c;
  
  if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
    uVar2 = *(uint *)&(param_3->Elements).field_0x28;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_3->Elements).field_0x10;
    uStack_64 = 1;
    puVar13 = (uint *)0x0;
    uStack_68 = 0;
    puVar10 = puVar13;
    local_50 = uStack_68;
    if (uVar2 != 0) {
      puVar8 = *(uint **)&(param_3->Elements).field_0x20;
      puVar10 = (uint *)(ulonglong)uVar2;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)TStack_90.Array;
      }
      uVar6 = *puVar8;
      puVar7 = puVar13;
      puVar12 = puVar13;
      local_50 = 0;
      uStack_68 = 0;
      while (uVar6 == 0) {
        iVar11 = (int)puVar12;
        local_50 = (int)puVar7 + 0x20;
        puVar7 = (uint *)(ulonglong)local_50;
        uStack_68 = iVar11 + 1;
        puVar12 = (uint *)(ulonglong)uStack_68;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_68)
        goto LAB_147a84ada;
        uVar6 = puVar8[(longlong)iVar11 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar1 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar6 = (local_50 - 1) + (int)lVar5;
      if ((int)uVar2 < (int)uVar6) {
        uVar6 = uVar2;
      }
      puVar10 = (uint *)(ulonglong)uVar6;
    }
LAB_147a84ada:
    TStack_90._padding_ = CONCAT44(uStack_64,uStack_68);
    uStack_58 = 0xffffffff;
    uStack_54 = (uint)puVar10;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iStack_4c = TStack_90.CurrentBitIndex;
    TStack_90._28_4_ = TStack_90.CurrentBitIndex;
    TStack_90.BaseBitIndex = local_50;
    local_70 = param_3;
    local_60 = (undefined1 *)TStack_90.Array;
    TStack_90.CurrentBitIndex = uStack_54;
    if ((int)uStack_54 < *(int *)&(param_3->Elements).field_0x28) {
      do {
        lVar5 = *(longlong *)&param_3->Elements;
        uVar2 = *(uint *)(lVar5 + (longlong)(int)puVar10 * 0xc);
        if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 !=
            *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34) {
          puVar3 = *(undefined1 **)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40;
          puVar9 = &(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          uVar6 = *(uint *)(puVar9 + (ulonglong)
                                     (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.
                                               field_0x48 - 1U & uVar2) * 4);
          if (uVar6 != 0xffffffff) {
            do {
              puVar8 = (uint *)((longlong)(int)uVar6 * 0x10 +
                               *(longlong *)&(this->KeyHandlesToIndices).KeyHandlesToIndices);
              if (*puVar8 == uVar2) {
                puVar7 = puVar8 + 1;
                if (puVar8 == (uint *)0x0) {
                  puVar7 = puVar13;
                }
                if (puVar7 != (uint *)0x0) {
                  lVar4 = this->_padding_;
                  fVar14 = (float)(**(code **)(lVar4 + 0x18))(this,uVar2);
                  (**(code **)(lVar4 + 0x10))
                            (this,*(undefined4 *)(lVar5 + (longlong)(int)puVar10 * 0xc),
                             (fVar14 - param_1) * param_2 + param_1);
                }
                break;
              }
              uVar6 = puVar8[2];
            } while (uVar6 != 0xffffffff);
          }
        }
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
        puVar10 = (uint *)(ulonglong)(uint)TStack_90.CurrentBitIndex;
      } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
    }
  }
  return;
}

// ShiftCurve @ 147a93210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FIndexedCurve::ShiftCurve(FIndexedCurve *this,float param_1)

{
  ForElementType<unsigned_int> this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  ForAnyElementType FVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined1 auStackY_198 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  FSparseArrayAllocationInfo local_c0;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar4 = (**(code **)(this->_padding_ + 8))();
  if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 -
      *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34 != iVar4) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles(&this->KeyHandlesToIndices,iVar4);
  }
  puVar20 = (uint *)0x0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  uVar13 = *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 -
           *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34;
  puVar12 = puVar20;
  if (uVar13 == 0) goto LAB_147a934f0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar13);
  if (uVar13 < 4) {
    uVar13 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar8 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar13 <= (int)local_60)) goto LAB_147a934f0;
  local_60 = uVar13;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar13 != 0) {
    uVar14 = uVar13;
    if (uVar13 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_147a93320;
      }
    }
    else {
LAB_147a93320:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar14,4);
    }
    if (0 < (int)uVar13) {
      uVar19 = (ulonglong)uVar13;
      puVar16 = puVar20;
      do {
        FVar11.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_68.Data;
        }
        uVar7 = (ulonglong)puVar16 & (longlong)(int)uVar13 - 1U;
        puVar16 = (uint *)((longlong)puVar16 + 1);
        *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (local_60 != 0) {
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    puVar16 = puVar20;
    if (local_80 != 0) {
      FVar18 = this_00;
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_88;
      }
      uVar13 = *(uint *)FVar18;
      puVar17 = puVar20;
      while (uVar13 == 0) {
        uStack_150 = (int)puVar17 + 0x20;
        puVar17 = (uint *)(ulonglong)uStack_150;
        iVar4 = (int)puVar16;
        local_168 = iVar4 + 1;
        puVar16 = (uint *)(ulonglong)local_168;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_147a93433;
        uVar13 = *(uint *)((uchar *)((longlong)FVar18 + 4) + (longlong)iVar4 * 4);
      }
      uStack_164 = -uVar13 & uVar13;
      uVar19 = (ulonglong)uStack_164 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uStack_154 = (int)lVar8 + -1 + uStack_150;
      puVar16 = (uint *)(ulonglong)uStack_154;
      if ((int)local_80 < (int)uStack_154) {
LAB_147a93433:
        puVar16 = (uint *)(ulonglong)local_80;
        uStack_154 = local_80;
      }
    }
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    if ((int)puVar16 < (int)local_80) {
      do {
        lVar8 = (longlong)(int)puVar16;
        uVar13 = local_60 - 1 & *(uint *)(local_a8._0_8_ + lVar8 * 0xc);
        *(uint *)(local_a8._0_8_ + lVar8 * 0xc + 8) = uVar13;
        FVar11.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_68.Data;
        }
        uVar19 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(local_a8._0_8_ + lVar8 * 0xc + 4) =
             *(undefined4 *)(FVar11.Data + uVar19 * 4);
        *(int *)(FVar11.Data + uVar19 * 4) = (int)puVar16;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        puVar16 = (uint *)(ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < *(int *)((longlong)local_108.Array + 0x18));
    }
  }
LAB_147a934f0:
  do {
    iVar4 = (int)puVar12;
    if ((iVar4 < 0) || ((this->KeyHandlesToIndices).KeyHandles.ArrayNum <= iVar4)) {
      ShiftCurve(this,param_1,
                 (TSet<FKeyHandle,DefaultKeyFuncs<FKeyHandle,0>,FDefaultSetAllocator> *)local_a8);
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      iVar4 = SUB84(local_a8._8_8_,4);
      local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
      }
      local_78 = -1;
      local_74 = 0;
      local_80 = 0;
      if (0x80 < local_7c) {
        local_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
      }
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      return;
    }
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data;
    if (local_74 == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
                         (int *)(local_a8 + 0xc));
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
      FVar18 = this_00;
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_88;
      }
      bVar10 = (byte)iVar6 & 0x1f;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
        bVar10 = bVar10 - 0x20;
      }
      puVar12 = (uint *)((longlong)FVar18 + (longlong)(iVar6 >> 5) * 4);
      *puVar12 = *puVar12 & ~(1 << (bVar10 & 0x1f));
      iVar6 = local_78;
    }
    else {
      iVar6 = *(int *)(local_a8._0_8_ + (longlong)local_78 * 0xc + 4);
      local_74 = local_74 + -1;
      iVar5 = local_78;
      if (local_74 != 0) {
        *(undefined4 *)(local_a8._0_8_ + (longlong)iVar6 * 0xc) = 0xffffffff;
      }
    }
    local_78 = iVar6;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,&local_c0,iVar5);
    puVar12 = puVar20;
    if (local_c0.Pointer != (uint *)0x0) {
      *(uint *)local_c0.Pointer = *(uint *)(pFVar1 + (longlong)iVar4 * 4);
      *(uint *)((longlong)local_c0.Pointer + 4) = 0xffffffff;
      puVar12 = local_c0.Pointer;
    }
    uVar13 = *puVar12;
    if ((local_a8._8_4_ - local_74 != 1) && (local_a8._8_4_ != local_74)) {
      FVar11.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_68.Data;
      }
      for (iVar5 = *(int *)(FVar11.Data + (ulonglong)(local_60 - 1 & uVar13) * 4); iVar5 != -1;
          iVar5 = *(int *)(local_a8._0_8_ + (longlong)iVar5 * 0xc + 4)) {
        if (*(uint *)(local_a8._0_8_ + (longlong)iVar5 * 0xc) == uVar13) {
          if (iVar5 != -1) {
            *(uint *)(local_a8._0_8_ + (longlong)iVar5 * 0xc) = uVar13;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_a8,local_c0.Index,1);
            goto LAB_147a938e7;
          }
          break;
        }
      }
    }
    uVar15 = local_a8._8_4_ - local_74;
    uVar14 = 1;
    if (3 < uVar15) {
      uVar19 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar15 < 1) || ((int)uVar14 <= (int)local_60)) {
      uVar13 = local_60 - 1 & uVar13;
      puVar12[2] = uVar13;
      FVar11.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_68.Data;
      }
      uVar19 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar13;
      puVar12[1] = *(uint *)(FVar11.Data + uVar19 * 4);
      *(int *)(FVar11.Data + uVar19 * 4) = local_c0.Index;
    }
    else {
      local_60 = uVar14;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar14 != 0) {
        uVar13 = uVar14;
        if (uVar14 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_147a93713;
          }
        }
        else {
LAB_147a93713:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar13,4)
          ;
        }
        if (0 < (int)uVar14) {
          uVar19 = (ulonglong)uVar14;
          puVar12 = puVar20;
          do {
            FVar11.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_68.Data;
            }
            uVar7 = (ulonglong)puVar12 & (longlong)(int)uVar14 - 1U;
            puVar12 = (uint *)((longlong)puVar12 + 1);
            *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (local_60 != 0) {
        local_148 = 0;
        uStack_144 = 1;
        uStack_134 = 0;
        uStack_130 = 0;
        puVar12 = puVar20;
        if (local_80 != 0) {
          FVar18 = this_00;
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_88;
          }
          uVar13 = *(uint *)FVar18;
          puVar16 = puVar20;
          while (uVar13 == 0) {
            uStack_130 = (int)puVar16 + 0x20;
            puVar16 = (uint *)(ulonglong)uStack_130;
            iVar5 = (int)puVar12;
            local_148 = iVar5 + 1;
            puVar12 = (uint *)(ulonglong)local_148;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
            goto LAB_147a93822;
            uVar13 = *(uint *)((uchar *)((longlong)FVar18 + 4) + (longlong)iVar5 * 4);
          }
          uStack_144 = -uVar13 & uVar13;
          uVar19 = (ulonglong)uStack_144 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uStack_134 = (int)lVar8 + -1 + uStack_130;
          puVar12 = (uint *)(ulonglong)uStack_134;
          if ((int)local_80 < (int)uStack_134) {
LAB_147a93822:
            puVar12 = (uint *)(ulonglong)local_80;
            uStack_134 = local_80;
          }
        }
        local_e8 = (longlong *)local_a8;
        local_e0._padding_ = CONCAT44(uStack_144,local_148);
        local_e0.CurrentBitIndex = uStack_134;
        local_e0.UnvisitedBitMask = 0xffffffff;
        local_e0._28_4_ = uStack_12c;
        local_e0.BaseBitIndex = uStack_130;
        local_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
        if ((int)puVar12 < (int)local_80) {
          do {
            lVar8 = *local_e8;
            lVar9 = (longlong)(int)puVar12;
            uVar13 = local_60 - 1 & *(uint *)(lVar8 + lVar9 * 0xc);
            *(uint *)(lVar8 + 8 + lVar9 * 0xc) = uVar13;
            FVar11.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_68.Data;
            }
            uVar19 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar13;
            *(undefined4 *)(lVar8 + 4 + lVar9 * 0xc) = *(undefined4 *)(FVar11.Data + uVar19 * 4);
            *(int *)(FVar11.Data + uVar19 * 4) = (int)puVar12;
            local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
            puVar12 = (uint *)(ulonglong)(uint)local_e0.CurrentBitIndex;
          } while (local_e0.CurrentBitIndex < *(int *)((longlong)local_e0.Array + 0x18));
        }
      }
    }
LAB_147a938e7:
    puVar12 = (uint *)(ulonglong)(iVar4 + 1);
  } while( true );
}

// ShiftCurve @ 147a939e0

void __thiscall
FIndexedCurve::ShiftCurve
          (FIndexedCurve *this,float param_1,
          TSet<FKeyHandle,DefaultKeyFuncs<FKeyHandle,0>,FDefaultSetAllocator> *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TSet<FKeyHandle,DefaultKeyFuncs<FKeyHandle,0>,FDefaultSetAllocator> *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  int iStack_3c;
  
  if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
    uVar2 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_54 = 1;
    puVar13 = (uint *)0x0;
    uStack_58 = 0;
    puVar10 = puVar13;
    local_40 = uStack_58;
    if (uVar2 != 0) {
      puVar8 = *(uint **)&(param_2->Elements).field_0x20;
      puVar10 = (uint *)(ulonglong)uVar2;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)TStack_80.Array;
      }
      uVar6 = *puVar8;
      puVar7 = puVar13;
      puVar12 = puVar13;
      local_40 = 0;
      uStack_58 = 0;
      while (uVar6 == 0) {
        iVar11 = (int)puVar7;
        local_40 = (int)puVar12 + 0x20;
        puVar12 = (uint *)(ulonglong)local_40;
        uStack_58 = iVar11 + 1;
        puVar7 = (uint *)(ulonglong)uStack_58;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_58)
        goto LAB_147a93aaa;
        uVar6 = puVar8[(longlong)iVar11 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      uVar1 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar6 = (local_40 - 1) + (int)lVar5;
      if ((int)uVar2 < (int)uVar6) {
        uVar6 = uVar2;
      }
      puVar10 = (uint *)(ulonglong)uVar6;
    }
LAB_147a93aaa:
    TStack_80._padding_ = CONCAT44(uStack_54,uStack_58);
    uStack_48 = 0xffffffff;
    uStack_44 = (uint)puVar10;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iStack_3c = TStack_80.CurrentBitIndex;
    TStack_80._28_4_ = TStack_80.CurrentBitIndex;
    TStack_80.BaseBitIndex = local_40;
    local_60 = param_2;
    local_50 = (undefined1 *)TStack_80.Array;
    TStack_80.CurrentBitIndex = uStack_44;
    if ((int)uStack_44 < *(int *)&(param_2->Elements).field_0x28) {
      do {
        lVar5 = *(longlong *)&param_2->Elements;
        uVar2 = *(uint *)(lVar5 + (longlong)(int)puVar10 * 0xc);
        if (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 !=
            *(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34) {
          puVar3 = *(undefined1 **)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40;
          puVar9 = &(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          uVar6 = *(uint *)(puVar9 + (ulonglong)
                                     (*(int *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.
                                               field_0x48 - 1U & uVar2) * 4);
          if (uVar6 != 0xffffffff) {
            do {
              puVar8 = (uint *)((longlong)(int)uVar6 * 0x10 +
                               *(longlong *)&(this->KeyHandlesToIndices).KeyHandlesToIndices);
              if (*puVar8 == uVar2) {
                puVar7 = puVar8 + 1;
                if (puVar8 == (uint *)0x0) {
                  puVar7 = puVar13;
                }
                if (puVar7 != (uint *)0x0) {
                  lVar4 = this->_padding_;
                  fVar14 = (float)(**(code **)(lVar4 + 0x18))(this,uVar2);
                  (**(code **)(lVar4 + 0x10))
                            (this,*(undefined4 *)(lVar5 + (longlong)(int)puVar10 * 0xc),
                             fVar14 + param_1);
                }
                break;
              }
              uVar6 = puVar8[2];
            } while (uVar6 != 0xffffffff);
          }
        }
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        puVar10 = (uint *)(ulonglong)(uint)TStack_80.CurrentBitIndex;
      } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
    }
  }
  return;
}

