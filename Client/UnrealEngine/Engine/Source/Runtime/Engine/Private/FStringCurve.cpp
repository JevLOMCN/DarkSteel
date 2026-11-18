// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 147a0c470

UScriptStruct * __cdecl FStringCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStringCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringCurve,(UObject *)pUVar1,L"StringCurve");
  }
  return Z_Registration_Info_UScriptStruct_FStringCurve.OuterSingleton;
}

// GetKeyTime @ 147a0c4b0

float __thiscall FStringCurve::GetKeyTime(FStringCurve *this,FKeyHandle param_1)

{
  float fVar1;
  bool bVar2;
  FStringCurveKey *pFVar3;
  FStringCurveKey local_38 [2];
  
  bVar2 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar2) {
    return 0.0;
  }
  pFVar3 = GetKey(this,local_38,param_1);
  fVar1 = pFVar3->Time;
  if (local_38[0].Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Value.Data.AllocatorInstance.Data);
  }
  return fVar1;
}

// SetKeyTime @ 147a0c520

void __thiscall FStringCurve::SetKeyTime(FStringCurve *this,FKeyHandle param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  FStringCurveKey *pFVar3;
  FString *in_R8;
  float in_XMM1_Da;
  FString local_30 [2];
  
  bVar2 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar2) {
    pFVar3 = GetKey(this,param_1);
    fVar1 = pFVar3->Time;
    ::FString::FString(local_30,&pFVar3->Value);
    DeleteKey(this,param_1);
    AddKey(this,in_XMM1_Da,in_R8,(FKeyHandle)(uint)local_30);
    pFVar3 = GetKey(this,param_1);
    pFVar3->Time = fVar1;
    ::FString::operator=(&pFVar3->Value,local_30);
    pFVar3->Time = param_2;
    if (local_30[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddKey @ 147a302c0

/* WARNING: Removing unreachable block (ram,0x000147a3048d) */

FKeyHandle __thiscall
FStringCurve::AddKey(FStringCurve *this,float param_1,FString *param_2,FKeyHandle param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint in_EDX;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 in_register_0000008c;
  float in_XMM2_Da;
  float local_48 [2];
  FString local_40 [2];
  
  uVar9 = 0;
  uVar6 = 0;
  uVar10 = uVar9;
  if (0 < (this->Keys).ArrayNum) {
    do {
      uVar6 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (FKeyHandle)uVar6;
      }
      pFVar2 = (this->Keys).AllocatorInstance.Data + uVar9;
      if (in_XMM2_Da < *(float *)pFVar2 || in_XMM2_Da == *(float *)pFVar2) break;
      uVar6 = uVar6 + 1;
      uVar9 = uVar9 + 0x18;
      uVar10 = (ulonglong)uVar6;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  local_48[0] = in_XMM2_Da;
  ::FString::FString(local_40,(FString *)CONCAT44(in_register_0000008c,param_3.Index));
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->Keys).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (FKeyHandle)uVar6;
  }
  iVar7 = (this->Keys).ArrayNum;
  piVar1 = &(this->Keys).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Keys).AllocatorInstance,piVar1);
  }
  (this->Keys).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)(int)uVar6;
  pFVar2 = (this->Keys).AllocatorInstance.Data + lVar8 * 0x18;
  memmove(pFVar2 + 0x18,pFVar2,(longlong)(int)(iVar7 - uVar6) * 0x18);
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
  *(float *)(pFVar2 + lVar8 * 0x18) = local_48[0];
  *(FScriptContainerElement **)(pFVar2 + lVar8 * 0x18 + 8) = local_40[0].Data.AllocatorInstance.Data
  ;
  *(int *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_40[0].Data.ArrayNum;
  *(int *)(pFVar2 + lVar8 * 0x18 + 0x14) = local_40[0].Data.ArrayMax;
  local_40[0].Data.ArrayNum = 0;
  local_40[0].Data.ArrayMax = 0;
  local_40[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,(FKeyHandle *)&stack0x00000028,uVar6);
  FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
  return (FKeyHandle)in_EDX;
}

// DeleteKey @ 147a3e820

void __thiscall FStringCurve::DeleteKey(FStringCurve *this,FKeyHandle param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  FKeyHandle local_res10 [2];
  
  local_res10[0].Index = param_1.Index;
  puVar8 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
  if (puVar8 == (uint *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar2 = *puVar8;
  uVar7 = 0;
  if ((int)uVar2 < (this->Keys).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->Keys).AllocatorInstance.Data;
  _Dst = pFVar3 + (longlong)(int)uVar2 * 0x18;
  pvVar4 = *(void **)(pFVar3 + (longlong)(int)uVar2 * 0x18 + 8);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  iVar9 = (this->Keys).ArrayNum + ~uVar2;
  if (iVar9 != 0) {
    memmove(_Dst,_Dst + 0x18,(longlong)iVar9 * 0x18);
  }
  piVar1 = &(this->Keys).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
  FKeyHandleMap::Remove((FKeyHandleMap *)&this->_padding_,local_res10);
  return;
}

// Eval @ 147a41f90

FString * __thiscall
FStringCurve::Eval(FStringCurve *this,FString *__return_storage_ptr__,float param_1,FString *param_2
                  )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  pFVar5 = &this->DefaultValue;
  if ((this->DefaultValue).Data.ArrayNum < 2) {
    pFVar5 = param_2;
  }
  ::FString::FString(__return_storage_ptr__,pFVar5);
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 != 0) {
    uVar6 = 0;
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    if (*(float *)(this->Keys).AllocatorInstance.Data <= param_1) {
      iVar1 = (this->Keys).ArrayNum;
      if (iVar1 < 2) {
        if (((this->Keys).ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
        ::FString::operator=
                  (__return_storage_ptr__,(FString *)((this->Keys).AllocatorInstance.Data + 8));
      }
      else {
        uVar7 = iVar1 - 1;
        uVar8 = 0;
        uVar4 = uVar8;
        if ((int)uVar7 < iVar1) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
        iVar1 = (this->Keys).ArrayNum;
        if (*(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18) <= param_1
           ) {
          uVar8 = iVar1 - 1;
          uVar4 = 0;
          if ((int)uVar8 < iVar1) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FString *)(*pcVar2)();
            return pFVar5;
          }
          ::FString::operator=
                    (__return_storage_ptr__,
                     (FString *)
                     ((this->Keys).AllocatorInstance.Data + ((longlong)(int)uVar8 * 3 + 1) * 8));
        }
        else {
          uVar9 = uVar6;
          if (0 < iVar1) {
            do {
              uVar7 = (uint)uVar9;
              uVar4 = uVar8;
              if ((int)uVar7 < (this->Keys).ArrayNum) {
                uVar4 = ~uVar7 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar5 = (FString *)(*pcVar2)();
                return pFVar5;
              }
              if (param_1 < *(float *)((this->Keys).AllocatorInstance.Data + uVar6)) {
                uVar4 = uVar7 - 1;
                if ((int)(uVar7 - 1) < 0) {
                  uVar4 = uVar8;
                }
                uVar8 = 0;
                if ((int)uVar4 < (this->Keys).ArrayNum) {
                  uVar8 = ~uVar4 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  pFVar5 = (FString *)(*pcVar2)();
                  return pFVar5;
                }
                ::FString::operator=
                          (__return_storage_ptr__,
                           (FString *)
                           ((this->Keys).AllocatorInstance.Data + ((longlong)(int)uVar4 * 3 + 1) * 8
                           ));
                return __return_storage_ptr__;
              }
              uVar6 = uVar6 + 0x18;
              uVar9 = (ulonglong)(uVar7 + 1);
            } while ((int)(uVar7 + 1) < (this->Keys).ArrayNum);
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// FindKey @ 147a45510

FKeyHandle __thiscall FStringCurve::FindKey(FStringCurve *this,float param_1,float param_2)

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
      fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
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

// GetKey @ 147a51ae0

FStringCurveKey * __thiscall FStringCurve::GetKey(FStringCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FStringCurveKey *pFVar7;
  
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
      pFVar7 = (FStringCurveKey *)(*pcVar2)();
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
      pFVar7 = (FStringCurveKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FStringCurveKey *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
}

// GetKey @ 147a51bb0

FStringCurveKey * __thiscall
FStringCurve::GetKey(FStringCurve *this,FStringCurveKey *__return_storage_ptr__,FKeyHandle param_1)

{
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  FStringCurveKey *pFVar9;
  
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
      pFVar9 = (FStringCurveKey *)(*pcVar4)();
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
      pFVar9 = (FStringCurveKey *)(*pcVar4)();
      return pFVar9;
    }
  }
  pFVar3 = (this->Keys).AllocatorInstance.Data;
  lVar1 = (longlong)(int)uVar2 * 3 + 1;
  __return_storage_ptr__->Time = *(float *)(pFVar3 + lVar1 * 8 + -8);
  ::FString::FString(&__return_storage_ptr__->Value,(FString *)(pFVar3 + lVar1 * 8));
  return __return_storage_ptr__;
}

// GetKeyValue @ 147a52490

FString * __thiscall
FStringCurve::GetKeyValue(FStringCurve *this,FString *__return_storage_ptr__,FKeyHandle param_1)

{
  bool bVar1;
  FStringCurveKey *pFVar2;
  FStringCurveKey local_28;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = GetKey(this,&local_28,param_1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       (pFVar2->Value).Data.AllocatorInstance.Data;
  (pFVar2->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Value).Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Value).Data.ArrayMax;
  (pFVar2->Value).Data.ArrayNum = 0;
  (pFVar2->Value).Data.ArrayMax = 0;
  if (local_28.Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Value.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RemoveRedundantKeys @ 147a7c570

void __thiscall FStringCurve::RemoveRedundantKeys(FStringCurve *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<unsigned_int> aVar4;
  bool bVar5;
  uint uVar6;
  FKeyHandle FVar7;
  int iVar8;
  undefined4 extraout_var;
  ForAnyElementType FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FKeyHandle FVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FKeyHandle local_res10 [2];
  undefined1 local_res18 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  FScriptContainerElement *pFVar9;
  uint *puVar17;
  
  iVar8 = (this->Keys).ArrayNum;
  puVar17 = (uint *)0x0;
  FVar15.Index = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar16 = 0;
  if (0 < iVar8) {
    lVar14 = 0x30;
    uVar12 = 1;
    do {
      uVar11 = uVar12 + 1;
      if ((int)uVar11 < iVar8) {
        uVar6 = uVar16;
        if ((int)(uVar12 - 1) < iVar8) {
          uVar6 = ~(uVar12 - 1) >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->Keys).AllocatorInstance.Data;
        uVar6 = uVar16;
        if ((int)uVar12 < (this->Keys).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->Keys).AllocatorInstance.Data;
        uVar6 = uVar16;
        if ((int)uVar11 < (this->Keys).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)(pFVar9 + lVar14 + -0x20);
        pFVar2 = (this->Keys).AllocatorInstance.Data;
        if (iVar8 == *(int *)(pFVar1 + lVar14 + -8)) {
          if (1 < iVar8) {
            iVar8 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(pFVar9 + lVar14 + -0x28),
                               *(wchar_t **)(pFVar1 + lVar14 + -0x10));
            bVar5 = iVar8 == 0;
            goto LAB_147a7c6f0;
          }
        }
        else {
          bVar5 = iVar8 + *(int *)(pFVar1 + lVar14 + -8) == 1;
LAB_147a7c6f0:
          if (!bVar5) goto LAB_147a7c7db;
        }
        iVar8 = *(int *)(pFVar1 + lVar14 + -8);
        iVar13 = *(int *)(pFVar2 + lVar14 + 0x10);
        if (iVar8 == iVar13) {
          if (1 < iVar8) {
            iVar8 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(pFVar1 + lVar14 + -0x10),
                               *(wchar_t **)(pFVar2 + lVar14 + 8));
            bVar5 = iVar8 == 0;
            goto LAB_147a7c723;
          }
        }
        else {
          bVar5 = iVar8 + iVar13 == 1;
LAB_147a7c723:
          if (!bVar5) goto LAB_147a7c7db;
        }
        FVar7 = FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,(int)local_res18);
        pFVar9 = (FScriptContainerElement *)CONCAT44(extraout_var,FVar7.Index);
        if (((local_48.Data <= pFVar9) && (pFVar9 < local_48.Data + (longlong)local_40._4_4_ * 4))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (int)local_40;
        if ((int)local_40 == local_40._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_48,(int *)((longlong)&local_40 + 4));
        }
        local_40 = CONCAT44(local_40._4_4_,iVar8 + 1);
        *(uint *)(local_48.Data + (longlong)iVar8 * 4) = *(uint *)pFVar9;
      }
LAB_147a7c7db:
      iVar8 = (this->Keys).ArrayNum;
      lVar14 = lVar14 + 0x18;
      bVar5 = (int)uVar12 < iVar8;
      uVar12 = uVar12 + 1;
    } while (bVar5);
  }
  iVar8 = (int)local_40;
  pFVar9 = local_48.Data + (longlong)(int)local_40 * 4;
  FVar10.Data = local_48.Data;
  while( true ) {
    if ((int)local_40 != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FKeyHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar9) break;
    DeleteKey(this,(FKeyHandle)*(uint *)FVar10.Data);
    FVar10.Data = FVar10.Data + 4;
  }
  if ((this->Keys).ArrayNum == 1) {
    pFVar9 = (this->Keys).AllocatorInstance.Data;
    iVar8 = *(int *)(pFVar9 + 0x10);
    iVar13 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar13 = 0;
    }
    ::FString::AssignRange(&this->DefaultValue,*(wchar_t **)(pFVar9 + 8),iVar13);
    iVar8 = (**(code **)(this->_padding_ + 8))(this);
    if (0 < iVar8) {
      if (((int)this->_padding_ < 1) || (this->_padding_ == 0)) {
        LOCK();
        aVar4 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
        UNLOCK();
        local_res10[0].Index = (int)LastKeyHandleIndex + 1;
        LastKeyHandleIndex = aVar4;
        if ((local_res10[0].Index == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                               ,0x1c,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,local_res10,0);
      }
      if (0 < (int)this->_padding_) {
        puVar17 = (uint *)this->_padding_;
      }
      FVar15.Index = *puVar17;
    }
    DeleteKey(this,FVar15);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetKeyValue @ 147a8f7b0

void __thiscall FStringCurve::SetKeyValue(FStringCurve *this,FKeyHandle param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FStringCurveKey *pFVar4;
  int iVar5;
  
  bVar3 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar3) {
    pFVar4 = GetKey(this,param_1);
    iVar1 = (param_2->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(&pFVar4->Value,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar5);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// UpdateOrAddKey @ 147a9ca60

FKeyHandle __thiscall
FStringCurve::UpdateOrAddKey(FStringCurve *this,float param_1,FString *param_2,float param_3)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint in_EDX;
  uint uVar6;
  longlong lVar7;
  FString *in_R9;
  float in_XMM2_Da;
  float in_stack_00000028;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar6 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        param_2 = (FString *)0x447;
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
        ::FString::operator=
                  ((FString *)
                   ((this->Keys).AllocatorInstance.Data + ((longlong)(int)uVar6 * 3 + 1) * 8),in_R9)
        ;
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
        return (FKeyHandle)in_EDX;
      }
      if (in_XMM2_Da < param_1) break;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  LOCK();
  aVar2 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  UNLOCK();
  bVar3 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
  LastKeyHandleIndex = aVar2;
  if (bVar3) {
    param_2 = (FString *)&DAT_0000001c;
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
  AddKey(this,param_1,param_2,(FKeyHandle)(uint)in_R9);
  return (FKeyHandle)in_EDX;
}

