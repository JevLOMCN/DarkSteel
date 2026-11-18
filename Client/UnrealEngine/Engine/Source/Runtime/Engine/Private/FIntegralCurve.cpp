// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticStruct @ 147a0c9d0

UScriptStruct * __cdecl FIntegralCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIntegralCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FIntegralCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIntegralCurve,(UObject *)pUVar1,L"IntegralCurve"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FIntegralCurve.OuterSingleton;
}

// SetKeyTime @ 147a0d360

void __thiscall FIntegralCurve::SetKeyTime(FIntegralCurve *this,FKeyHandle param_1,float param_2)

{
  FIntegralKey FVar1;
  bool bVar2;
  FIntegralKey *pFVar3;
  int in_R8D;
  float in_XMM1_Da;
  FKeyHandle FStackX_24;
  
  bVar2 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar2) {
    pFVar3 = GetKey(this,param_1);
    FVar1 = *pFVar3;
    DeleteKey(this,param_1);
    FStackX_24.Index = FVar1.Value;
    AddKey(this,in_XMM1_Da,in_R8D,FStackX_24);
    pFVar3 = GetKey(this,param_1);
    *pFVar3 = FVar1;
    pFVar3->Time = param_2;
  }
  return;
}

// GetKeyTime @ 147a0d3f0

float __thiscall FIntegralCurve::GetKeyTime(FIntegralCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  FIntegralKey FVar2;
  undefined1 local_res18 [16];
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    return 0.0;
  }
  FVar2 = GetKey(this,(FKeyHandle)(uint)local_res18);
  return *(float *)FVar2;
}

// AddKey @ 147a2f820

FKeyHandle __thiscall
FIntegralCurve::AddKey(FIntegralCurve *this,float param_1,int param_2,FKeyHandle param_3)

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
  float in_XMM2_Da;
  float local_38;
  uint uStack_34;
  
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
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  local_38 = in_XMM2_Da;
  uStack_34 = param_3.Index;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Keys).ArrayMax * 8)) {
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
                      (0x408,&(this->Keys).AllocatorInstance,piVar1);
  }
  (this->Keys).ArrayNum = iVar7 + 1;
  pFVar2 = (this->Keys).AllocatorInstance.Data + (longlong)(int)uVar6 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(int)(iVar7 - uVar6) << 3);
  *(ulonglong *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) =
       CONCAT44(uStack_34,local_38);
  FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,(FKeyHandle *)&stack0x00000028,uVar6);
  FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
  return (FKeyHandle)in_EDX;
}

// DeleteKey @ 147a3e3d0

void __thiscall FIntegralCurve::DeleteKey(FIntegralCurve *this,FKeyHandle param_1)

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
  _Dst = (this->Keys).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
  iVar7 = (this->Keys).ArrayNum + ~uVar2;
  if (iVar7 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
  }
  piVar1 = &(this->Keys).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
  FKeyHandleMap::Remove((FKeyHandleMap *)&this->_padding_,local_res10);
  return;
}

// Evaluate @ 147a42520

int __thiscall FIntegralCurve::Evaluate(FIntegralCurve *this,float param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  TArray<FIntegralKey,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar4 = (this->Keys).ArrayNum;
  iVar5 = this->DefaultValue;
  if (this->DefaultValue == 0x7fffffff) {
    iVar5 = param_2;
  }
  if (iVar4 == 0) {
    return iVar5;
  }
  uVar9 = 0;
  if (this->bUseDefaultValueBeforeFirstKey != false) {
    if ((iVar4 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if (param_1 < *(float *)(this->Keys).AllocatorInstance.Data) {
      return iVar5;
    }
  }
  pTVar8 = &this->Keys;
  piVar1 = &(this->Keys).ArrayNum;
  iVar4 = *piVar1;
  if ((iVar4 < 2) || (param_1 < *(float *)(pTVar8->AllocatorInstance).Data)) {
    if (((this->Keys).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar5 = *(int *)((pTVar8->AllocatorInstance).Data + 4);
  }
  else {
    uVar10 = 0;
    uVar12 = iVar4 - 1;
    uVar7 = uVar10;
    if ((int)uVar12 < iVar4) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar4 = *piVar1;
    if (*(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar12 * 8) <= param_1) {
      uVar7 = iVar4 - 1;
      uVar10 = 0;
      if ((int)uVar7 < iVar4) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar6 = (pTVar8->AllocatorInstance).Data;
LAB_147a4271b:
      iVar5 = *(int *)(pFVar6 + (longlong)(int)uVar7 * 8 + 4);
    }
    else {
      uVar11 = uVar9;
      if (0 < iVar4) {
        do {
          uVar12 = (uint)uVar9;
          uVar7 = uVar10;
          if ((int)uVar12 < (this->Keys).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          if (param_1 < *(float *)((pTVar8->AllocatorInstance).Data + uVar11)) {
            uVar7 = uVar12 - 1;
            if ((int)(uVar12 - 1) < 0) {
              uVar7 = uVar10;
            }
            if ((int)uVar7 < (this->Keys).ArrayNum) {
              uVar10 = ~uVar7 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar4 = (*pcVar2)();
              return iVar4;
            }
            pFVar6 = (this->Keys).AllocatorInstance.Data;
            goto LAB_147a4271b;
          }
          uVar9 = (ulonglong)(uVar12 + 1);
          uVar11 = uVar11 + 8;
        } while ((int)(uVar12 + 1) < *piVar1);
      }
    }
  }
  return iVar5;
}

// FindKey @ 147a45160

FKeyHandle __thiscall FIntegralCurve::FindKey(FIntegralCurve *this,float param_1,float param_2)

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
      fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
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

// FindKeyBeforeOrAt @ 147a45680

FKeyHandle __thiscall FIntegralCurve::FindKeyBeforeOrAt(FIntegralCurve *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FKeyHandle FVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *in_RDX;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float in_XMM2_Da;
  
  iVar8 = (this->Keys).ArrayNum;
  FVar5.Index = (uint)in_RDX;
  if (iVar8 != 0) {
    if ((iVar8 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (FKeyHandle)uVar6;
    }
    if (*(float *)(this->Keys).AllocatorInstance.Data <= in_XMM2_Da) {
      iVar8 = (this->Keys).ArrayNum;
      uVar10 = iVar8 - 1;
      uVar6 = 0;
      if ((int)uVar10 < iVar8) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (FKeyHandle)uVar6;
      }
      uVar6 = (this->Keys).ArrayNum - 1;
      if (in_XMM2_Da < *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar10 * 8))
      {
        uVar11 = 0xffffffff;
        uVar10 = 0;
        do {
          uVar7 = (int)(uVar6 + uVar10) / 2;
          uVar9 = 0;
          if ((int)uVar7 < (this->Keys).ArrayNum) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (FKeyHandle)uVar6;
          }
          uVar12 = uVar7 + 1;
          fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
          uVar9 = 0;
          if ((int)uVar12 < (this->Keys).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (FKeyHandle)uVar6;
          }
          uVar9 = uVar7;
          uVar3 = uVar11;
          if ((fVar1 <= in_XMM2_Da) &&
             (uVar9 = uVar6, uVar3 = uVar7,
             *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) <=
             in_XMM2_Da)) {
            uVar10 = uVar12;
            uVar3 = uVar11;
          }
          uVar11 = uVar3;
          uVar6 = uVar9;
        } while ((int)uVar11 < 0);
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,FVar5.Index);
      }
      else {
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,FVar5.Index);
      }
      return (FKeyHandle)FVar5.Index;
    }
  }
  LOCK();
  UNLOCK();
  iVar8 = (int)LastKeyHandleIndex + 1;
  LastKeyHandleIndex = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  *in_RDX = iVar8;
  if ((iVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                         ,0x1c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (FKeyHandle)uVar6;
  }
  return (FKeyHandle)FVar5.Index;
}

// GetKey @ 147a513f0

FIntegralKey * __thiscall FIntegralCurve::GetKey(FIntegralCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FIntegralKey *pFVar7;
  
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
      pFVar7 = (FIntegralKey *)(*pcVar2)();
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
      pFVar7 = (FIntegralKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FIntegralKey *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
}

// GetKey @ 147a514c0

FIntegralKey __thiscall FIntegralCurve::GetKey(FIntegralCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FIntegralKey FVar7;
  int in_register_00000014;
  FKeyHandle in_R8D;
  
  FVar7.Value = in_register_00000014;
  FVar7.Time = (float)param_1.Index;
  iVar4 = (**(code **)(this->_padding_ + 8))();
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar4) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar4);
  }
  puVar6 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,in_R8D);
  if (puVar6 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar7 = (FIntegralKey)(*pcVar2)();
      return FVar7;
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
      FVar7 = (FIntegralKey)(*pcVar2)();
      return FVar7;
    }
  }
  *(undefined8 *)FVar7 =
       *(undefined8 *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  return FVar7;
}

// GetKeyIterator @ 147a52080

TIndexedContainerIterator<TArray<FIntegralKey,TSizedDefaultAllocator<32>_>_const_,FIntegralKey_const_,int>
* __thiscall
FIntegralCurve::GetKeyIterator
          (FIntegralCurve *this,
          TIndexedContainerIterator<TArray<FIntegralKey,TSizedDefaultAllocator<32>_>_const_,FIntegralKey_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->Keys;
  return __return_storage_ptr__;
}

// GetKeyValue @ 147a523a0

int __thiscall FIntegralCurve::GetKeyValue(FIntegralCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  FIntegralKey FVar2;
  undefined1 local_res18 [16];
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    return 0;
  }
  FVar2 = GetKey(this,(FKeyHandle)(uint)local_res18);
  return *(int *)((longlong)FVar2 + 4);
}

// RemoveRedundantKeys @ 147a7bf70

void __thiscall FIntegralCurve::RemoveRedundantKeys(FIntegralCurve *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  uint uVar5;
  FKeyHandle FVar6;
  int iVar7;
  undefined4 extraout_var;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FKeyHandle FVar12;
  uint uVar13;
  longlong lVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  FKeyHandle local_res18 [2];
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  FScriptContainerElement *pFVar8;
  uint *puVar14;
  
  iVar7 = (this->Keys).ArrayNum;
  puVar14 = (uint *)0x0;
  FVar12.Index = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = 0;
  if (0 < iVar7) {
    lVar15 = 0x10;
    uVar9 = 1;
    do {
      uVar11 = uVar9 + 1;
      local_res10 = uVar9;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar13;
        if ((int)(uVar9 - 1) < iVar7) {
          uVar5 = ~(uVar9 - 1) >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (this->Keys).AllocatorInstance.Data;
        uVar5 = uVar13;
        if ((int)uVar9 < (this->Keys).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Keys).AllocatorInstance.Data;
        uVar9 = uVar13;
        if ((int)uVar11 < (this->Keys).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = *(int *)(pFVar1 + lVar15 + -4);
        if ((*(int *)(pFVar8 + lVar15 + -0xc) == iVar7) &&
           (iVar7 == *(int *)((this->Keys).AllocatorInstance.Data + lVar15 + 4))) {
          FVar6 = FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,(int)local_res20);
          pFVar8 = (FScriptContainerElement *)CONCAT44(extraout_var,FVar6.Index);
          if ((local_58.Data <= pFVar8) &&
             ((pFVar8 < local_58.Data + (longlong)local_50._4_4_ * 4 &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)))) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = (int)local_50;
          if ((int)local_50 == local_50._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_58,(int *)((longlong)&local_50 + 4));
          }
          local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
          *(uint *)(local_58.Data + (longlong)iVar7 * 4) = *(uint *)pFVar8;
        }
      }
      iVar7 = (this->Keys).ArrayNum;
      lVar15 = lVar15 + 8;
      uVar9 = uVar11;
    } while ((int)local_res10 < iVar7);
  }
  iVar7 = (int)local_50;
  pFVar8 = local_58.Data + (longlong)(int)local_50 * 4;
  FVar10.Data = local_58.Data;
  while( true ) {
    if ((int)local_50 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FKeyHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar8) break;
    DeleteKey(this,(FKeyHandle)*(uint *)FVar10.Data);
    FVar10.Data = FVar10.Data + 4;
  }
  if ((this->Keys).ArrayNum == 1) {
    this->DefaultValue = *(int *)((this->Keys).AllocatorInstance.Data + 4);
    iVar7 = (**(code **)(this->_padding_ + 8))(this);
    if (0 < iVar7) {
      if (((int)this->_padding_ < 1) || (this->_padding_ == 0)) {
        LOCK();
        aVar3 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
        UNLOCK();
        local_res18[0].Index = (int)LastKeyHandleIndex + 1;
        LastKeyHandleIndex = aVar3;
        if ((local_res18[0].Index == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                               ,0x1c,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,local_res18,0);
      }
      if (0 < (int)this->_padding_) {
        puVar14 = (uint *)this->_padding_;
      }
      FVar12.Index = *puVar14;
    }
    DeleteKey(this,FVar12);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// SetKeyValue @ 147a8f6a0

void __thiscall FIntegralCurve::SetKeyValue(FIntegralCurve *this,FKeyHandle param_1,int param_2)

{
  bool bVar1;
  FIntegralKey *pFVar2;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar1) {
    pFVar2 = GetKey(this,param_1);
    pFVar2->Value = param_2;
  }
  return;
}

// UpdateOrAddKey @ 147a9c310

FKeyHandle __thiscall
FIntegralCurve::UpdateOrAddKey(FIntegralCurve *this,float param_1,int param_2,float param_3)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint in_EDX;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  FKeyHandle in_R9D;
  float in_XMM2_Da;
  float in_stack_00000028;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar8 = (ulonglong)(uint)param_2;
  uVar6 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        uVar8 = 0x447;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (FKeyHandle)uVar5;
        }
      }
      param_2 = (int)uVar8;
      param_1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar7);
      if ((float)((uint)(param_1 - in_XMM2_Da) & uVar5) <= in_stack_00000028) {
        uVar5 = 0;
        if ((int)uVar6 < (this->Keys).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (FKeyHandle)uVar5;
        }
        *(uint *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4) = in_R9D.Index
        ;
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
        return (FKeyHandle)in_EDX;
      }
      if (in_XMM2_Da < param_1) break;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  LOCK();
  aVar2 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  UNLOCK();
  bVar3 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
  LastKeyHandleIndex = aVar2;
  if (bVar3) {
    param_2 = 0x1c;
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
  AddKey(this,param_1,param_2,in_R9D);
  return (FKeyHandle)in_EDX;
}

