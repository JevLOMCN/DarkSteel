// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 147a0e090

UScriptStruct * __cdecl FNameCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNameCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNameCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNameCurve,(UObject *)pUVar1,L"NameCurve");
  }
  return Z_Registration_Info_UScriptStruct_FNameCurve.OuterSingleton;
}

// GetKeyTime @ 147a0e0d0

float __thiscall FNameCurve::GetKeyTime(FNameCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  float fVar7;
  
  bVar3 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar3) {
    return 0.0;
  }
  iVar4 = (**(code **)(this->_padding_ + 8))(this);
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar4) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar4);
  }
  puVar6 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
  if (puVar6 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  uVar1 = *puVar6;
  uVar5 = 0;
  if ((int)uVar1 < (this->Keys).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  return (float)*(undefined8 *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0xc);
}

// SetKeyTime @ 147a0e1c0

void __thiscall FNameCurve::SetKeyTime(FNameCurve *this,FKeyHandle param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNameCurveKey *pFVar6;
  uint *puVar7;
  int iVar8;
  FName *pFVar9;
  float in_XMM1_Da;
  FKeyHandle local_res20 [2];
  undefined8 local_40;
  uint local_38;
  
  bVar4 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar4) {
    pFVar6 = GetKey(this,param_1);
    local_40._0_4_ = pFVar6->Time;
    local_40._4_4_ = (pFVar6->Value).ComparisonIndex;
    local_38 = (pFVar6->Value).Number;
    local_res20[0].Index = param_1.Index;
    puVar7 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
    if (puVar7 == (uint *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                         ,0x49,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar2 = *puVar7;
    uVar5 = 0;
    if ((int)uVar2 < (this->Keys).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar8 = (this->Keys).ArrayNum + ~uVar2;
    _Dst = (this->Keys).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xc;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + 0xc,(longlong)iVar8 * 0xc);
    }
    piVar1 = &(this->Keys).ArrayNum;
    *piVar1 = *piVar1 + -1;
    pFVar9 = (FName *)&this->Keys;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(ForAnyElementType *)pFVar9,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
    FKeyHandleMap::Remove((FKeyHandleMap *)&this->_padding_,local_res20);
    AddKey(this,in_XMM1_Da,pFVar9,(FKeyHandle)((int)&local_40 + 4));
    pFVar6 = GetKey(this,param_1);
    pFVar6->Time = (float)(undefined4)local_40;
    (pFVar6->Value).ComparisonIndex = (FNameEntryId)local_40._4_4_;
    (pFVar6->Value).Number = local_38;
    pFVar6->Time = param_2;
  }
  return;
}

// AddKey @ 147a2f9c0

FKeyHandle __thiscall
FNameCurve::AddKey(FNameCurve *this,float param_1,FName *param_2,FKeyHandle param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_EDX;
  longlong lVar8;
  undefined4 in_register_0000008c;
  float in_XMM2_Da;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar6 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (FKeyHandle)uVar6;
        }
      }
      pFVar2 = (this->Keys).AllocatorInstance.Data + lVar8;
      if (in_XMM2_Da < *(float *)pFVar2 || in_XMM2_Da == *(float *)pFVar2) break;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0xc;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  uStack_34 = (undefined4)*(undefined8 *)CONCAT44(in_register_0000008c,param_3.Index);
  uStack_30 = (undefined4)
              ((ulonglong)*(undefined8 *)CONCAT44(in_register_0000008c,param_3.Index) >> 0x20);
  local_38 = in_XMM2_Da;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Keys).ArrayMax * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (FKeyHandle)uVar6;
    }
  }
  iVar7 = (this->Keys).ArrayNum;
  piVar1 = &(this->Keys).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->Keys).AllocatorInstance,piVar1);
  }
  (this->Keys).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)(int)uVar6;
  pFVar2 = (this->Keys).AllocatorInstance.Data + lVar8 * 0xc;
  memmove(pFVar2 + 0xc,pFVar2,(longlong)(int)(iVar7 - uVar6) * 0xc);
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + lVar8 * 0xc) = CONCAT44(uStack_34,local_38);
  *(undefined4 *)(pFVar2 + lVar8 * 0xc + 8) = uStack_30;
  FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,(FKeyHandle *)&stack0x00000028,uVar6);
  FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
  return (FKeyHandle)in_EDX;
}

// DeleteKey @ 147a3e4e0

void __thiscall FNameCurve::DeleteKey(FNameCurve *this,FKeyHandle param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  FKeyHandle local_res10 [2];
  
  local_res10[0].Index = param_1.Index;
  puVar6 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
  if (puVar6 == (uint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *puVar6;
  uVar5 = 0;
  if ((int)uVar2 < (this->Keys).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  _Dst = (this->Keys).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xc;
  iVar7 = (this->Keys).ArrayNum + ~uVar2;
  if (iVar7 != 0) {
    memmove(_Dst,_Dst + 0xc,(longlong)iVar7 * 0xc);
  }
  piVar1 = &(this->Keys).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
  FKeyHandleMap::Remove((FKeyHandleMap *)&this->_padding_,local_res10);
  return;
}

// FindKey @ 147a45340

FKeyHandle __thiscall FNameCurve::FindKey(FNameCurve *this,float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  FKeyHandle FVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *in_RDX;
  int iVar9;
  int iVar10;
  float in_XMM3_Da;
  
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar9 = 0;
  iVar10 = (this->Keys).ArrayNum + -1;
  FVar5.Index = (uint)in_RDX;
  if (-1 < iVar10) {
    do {
      iVar6 = iVar10 - iVar9;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = (iVar6 >> 1) + iVar9;
      uVar7 = 0;
      if ((int)uVar1 < (this->Keys).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (FKeyHandle)uVar8;
      }
      fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0xc);
      if ((float)((uint)(fVar2 - param_2) & uVar8) <= in_XMM3_Da) {
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,FVar5.Index);
        return (FKeyHandle)FVar5.Index;
      }
      iVar6 = uVar1 + 1;
      if (param_2 <= fVar2) {
        iVar6 = iVar9;
        iVar10 = uVar1 - 1;
      }
      iVar9 = iVar6;
    } while (iVar9 <= iVar10);
  }
  LOCK();
  UNLOCK();
  iVar10 = (int)LastKeyHandleIndex + 1;
  LastKeyHandleIndex = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  *in_RDX = iVar10;
  if ((iVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (FKeyHandle)uVar8;
  }
  return (FKeyHandle)FVar5.Index;
}

// GetKey @ 147a515a0

FNameCurveKey * __thiscall FNameCurve::GetKey(FNameCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FNameCurveKey *pFVar7;
  
  iVar4 = (**(code **)(this->_padding_ + 8))();
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar4) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar4);
  }
  puVar6 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
  if (puVar6 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FNameCurveKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  uVar1 = *puVar6;
  uVar5 = 0;
  if ((int)uVar1 < (this->Keys).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FNameCurveKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FNameCurveKey *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0xc);
}

// GetKey @ 147a51670

FNameCurveKey * __thiscall
FNameCurve::GetKey(FNameCurve *this,FNameCurveKey *__return_storage_ptr__,FKeyHandle param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  FNameCurveKey *pFVar9;
  
  iVar6 = (**(code **)(this->_padding_ + 8))();
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar6) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar6);
  }
  puVar8 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
  if (puVar8 == (uint *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FNameCurveKey *)(*pcVar4)();
      return pFVar9;
    }
  }
  uVar2 = *puVar8;
  uVar7 = 0;
  if ((int)uVar2 < (this->Keys).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FNameCurveKey *)(*pcVar4)();
      return pFVar9;
    }
  }
  pFVar3 = (this->Keys).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar2 * 0xc);
  uVar2 = *(uint *)(pFVar3 + (longlong)(int)uVar2 * 0xc + 8);
  __return_storage_ptr__->Time = (float)(int)uVar1;
  (__return_storage_ptr__->Value).ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->Value).Number = uVar2;
  return __return_storage_ptr__;
}

// UpdateOrAddKey @ 147a9c4d0

FKeyHandle __thiscall
FNameCurve::UpdateOrAddKey(FNameCurve *this,float param_1,FName *param_2,float param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint in_EDX;
  longlong lVar7;
  uint uVar8;
  undefined8 *in_R9;
  float in_XMM2_Da;
  float in_stack_00000028;
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar8 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Keys).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        param_2 = (FName *)0x447;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (FKeyHandle)uVar6;
        }
      }
      param_1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar7);
      if ((float)((uint)(param_1 - in_XMM2_Da) & uVar6) <= in_stack_00000028) {
        uVar1 = *in_R9;
        uVar6 = 0;
        if ((int)uVar8 < (this->Keys).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (FKeyHandle)uVar6;
        }
        *(undefined8 *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc + 4) =
             uVar1;
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
        return (FKeyHandle)in_EDX;
      }
      if (in_XMM2_Da < param_1) break;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while ((int)uVar8 < (this->Keys).ArrayNum);
  }
  LOCK();
  aVar3 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  UNLOCK();
  bVar4 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
  LastKeyHandleIndex = aVar3;
  if (bVar4) {
    param_2 = (FName *)&DAT_0000001c;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (FKeyHandle)uVar6;
    }
  }
  AddKey(this,param_1,param_2,(FKeyHandle)(uint)in_R9);
  return (FKeyHandle)in_EDX;
}

