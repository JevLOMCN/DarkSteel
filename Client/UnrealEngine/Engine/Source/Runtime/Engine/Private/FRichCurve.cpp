// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// StaticStruct @ 147a0ebe0

UScriptStruct * __cdecl FRichCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRichCurve,(UObject *)pUVar1,L"RichCurve");
  }
  return Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton;
}

// operator== @ 147a2c420

bool __thiscall FRichCurve::operator==(FRichCurve *this,FRichCurve *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 == (param_1->Keys).ArrayNum) {
    uVar9 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar2 = (this->Keys).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar9 < (param_1->Keys).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_1->Keys).AllocatorInstance.Data;
        if (*(float *)(pFVar3 + lVar8 + 4) != *(float *)(pFVar2 + lVar8 + 4)) {
          return false;
        }
        if (*(float *)(pFVar3 + lVar8 + 8) != *(float *)(pFVar2 + lVar8 + 8)) {
          return false;
        }
        if (pFVar2[lVar8] != pFVar3[lVar8]) {
          return false;
        }
        if (pFVar2[lVar8 + 1] != pFVar3[lVar8 + 1]) {
          return false;
        }
        if (pFVar2[lVar8 + 2] != pFVar3[lVar8 + 2]) {
          return false;
        }
        if (pFVar2[lVar8] == (FScriptContainerElement)0x2) {
          if (*(float *)(pFVar3 + lVar8 + 0xc) != *(float *)(pFVar2 + lVar8 + 0xc)) {
            return false;
          }
          if (*(float *)(pFVar3 + lVar8 + 0x14) != *(float *)(pFVar2 + lVar8 + 0x14)) {
            return false;
          }
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x1c;
      } while ((int)uVar9 < (this->Keys).ArrayNum);
    }
    if (*(char *)((longlong)&this->_padding_ + 4) == *(char *)((longlong)&param_1->_padding_ + 4)) {
      return *(char *)((longlong)&this->_padding_ + 5) ==
             *(char *)((longlong)&param_1->_padding_ + 5);
    }
  }
  return false;
}

// AddKey @ 147a2fb80

FKeyHandle __thiscall
FRichCurve::AddKey(FRichCurve *this,float param_1,float param_2,bool param_3,FKeyHandle param_4)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *in_RDX;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 in_XMM3_Da;
  float fVar14;
  FKeyHandle in_stack_00000030;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong uVar9;
  
  iVar6 = (this->Keys).ArrayNum;
  uVar9 = 0;
  uVar5 = 0;
  if (iVar6 == 0) {
    pFVar7 = (this->Keys).AllocatorInstance.Data;
  }
  else {
    uVar8 = uVar5;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar8 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (FKeyHandle)uVar5;
    }
    pFVar7 = (this->Keys).AllocatorInstance.Data;
    if (param_2 < *(float *)(pFVar7 + ((longlong)(this->Keys).ArrayNum * 0xe + -0xc) * 2) ||
        param_2 == *(float *)(pFVar7 + ((longlong)(this->Keys).ArrayNum * 0xe + -0xc) * 2)) {
      uVar12 = uVar9;
      uVar8 = uVar5;
      if (0 < (this->Keys).ArrayNum) {
        do {
          uVar8 = (uint)uVar9;
          uVar11 = uVar5;
          if ((int)uVar8 < (this->Keys).ArrayNum) {
            uVar11 = ~uVar8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (FKeyHandle)uVar5;
          }
          pFVar7 = (this->Keys).AllocatorInstance.Data;
          if (param_2 < *(float *)(pFVar7 + uVar12 + 4) ||
              param_2 == *(float *)(pFVar7 + uVar12 + 4)) break;
          uVar8 = uVar8 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar12 = uVar12 + 0x1c;
        } while ((int)uVar8 < (this->Keys).ArrayNum);
      }
      goto LAB_147a2fca9;
    }
  }
  uVar8 = (this->Keys).ArrayNum;
LAB_147a2fca9:
  piVar10 = &(this->Keys).ArrayNum;
  local_68 = 0;
  uStack_66 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  fStack_64 = param_2;
  uStack_60 = in_XMM3_Da;
  if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar7 + (longlong)(this->Keys).ArrayMax * 0x1c)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (FKeyHandle)uVar5;
  }
  iVar6 = *piVar10;
  piVar1 = &(this->Keys).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->Keys).AllocatorInstance,piVar1);
    *piVar10 = iVar6;
  }
  pFVar7 = (this->Keys).AllocatorInstance.Data;
  *piVar10 = iVar6 + 1;
  lVar13 = (longlong)(int)uVar8 * 0x1c;
  pFVar7 = pFVar7 + lVar13;
  memmove(pFVar7 + 0x1c,pFVar7,(longlong)(int)(iVar6 - uVar8) * 0x1c);
  pFVar7 = (this->Keys).AllocatorInstance.Data;
  *(ulonglong *)(pFVar7 + lVar13) =
       CONCAT44(fStack_64,CONCAT13(uStack_65,CONCAT12(uStack_66,local_68)));
  *(ulonglong *)(pFVar7 + lVar13 + 8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(pFVar7 + lVar13 + 0x10) = CONCAT44(uStack_54,uStack_58);
  *(undefined4 *)(pFVar7 + lVar13 + 0x18) = uStack_50;
  if ((0 < (int)uVar8) && ((char)param_4.Index != '\0')) {
    uVar11 = uVar8 - 1;
    if ((int)uVar11 < *piVar10) {
      uVar5 = ~uVar11 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (FKeyHandle)uVar5;
    }
    fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x1c + 8);
    uVar5 = 0;
    if ((int)uVar8 < *piVar10) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (FKeyHandle)uVar5;
    }
    for (fVar14 = *(float *)((this->Keys).AllocatorInstance.Data + lVar13 + 8);
        __real_43340000 < fVar14 - fVar2; fVar14 = fVar14 + __real_c3b40000) {
    }
    for (; fVar14 - fVar2 < __real_c3340000; fVar14 = fVar14 + __real_43b40000) {
    }
    uVar5 = 0;
    if ((int)uVar8 < *piVar10) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (FKeyHandle)uVar5;
    }
    *(float *)((this->Keys).AllocatorInstance.Data + lVar13 + 8) = fVar14;
  }
  FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,&stack0x00000030,uVar8);
  *in_RDX = in_stack_00000030.Index;
  return (FKeyHandle)(uint)in_RDX;
}

// AutoSetTangents @ 147a33540

void __thiscall FRichCurve::AutoSetTangents(FRichCurve *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  fVar7 = __real_3f800000;
  fVar6 = __real_38d1b717;
  uVar13 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (this->Keys).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->Keys).AllocatorInstance.Data;
      iVar1 = (this->Keys).ArrayNum;
      fVar14 = *(float *)(pFVar2 + lVar12 + 0xc);
      fVar15 = *(float *)(pFVar2 + lVar12 + 0x14);
      iVar10 = iVar1 + -1;
      if (uVar13 == 0) {
        if ((0 < iVar10) && (pFVar2[lVar12 + 1] == (FScriptContainerElement)0x0)) {
          fVar15 = 0.0;
        }
      }
      else if ((int)uVar13 < iVar10) {
        uVar9 = 0;
        if ((int)(uVar13 - 1) < iVar1) {
          uVar9 = -uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Keys).AllocatorInstance.Data;
        if ((pFVar2[lVar12] == (FScriptContainerElement)0x2) &&
           (pFVar2[lVar12 + 1] == (FScriptContainerElement)0x0)) {
          uVar9 = uVar13 + 1;
          uVar11 = 0;
          if ((int)uVar9 < (this->Keys).ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->Keys).AllocatorInstance.Data;
          fVar14 = *(float *)(pFVar4 + (longlong)(int)uVar9 * 0x1c + 4) -
                   *(float *)(pFVar3 + lVar12 + -0x18);
          if (fVar14 <= fVar6) {
            fVar14 = fVar6;
          }
          fVar14 = (((*(float *)(pFVar2 + lVar12 + 8) - *(float *)(pFVar3 + lVar12 + -0x14)) +
                    (*(float *)(pFVar4 + (longlong)(int)uVar9 * 0x1c + 8) -
                    *(float *)(pFVar2 + lVar12 + 8))) * (fVar7 - param_1)) / fVar14;
          fVar15 = fVar14;
        }
        else if (((pFVar3[lVar12 + -0x1c] == (FScriptContainerElement)0x1) ||
                 (pFVar2[lVar12] == (FScriptContainerElement)0x1)) &&
                (fVar15 = 0.0, pFVar3[lVar12 + -0x1c] != (FScriptContainerElement)0x2))
        goto LAB_147a33754;
      }
      else if ((pFVar2[lVar12] == (FScriptContainerElement)0x2) &&
              (pFVar2[lVar12 + 1] == (FScriptContainerElement)0x0)) {
LAB_147a33754:
        fVar14 = 0.0;
      }
      *(float *)(pFVar2 + lVar12 + 0xc) = fVar14;
      uVar13 = uVar13 + 1;
      *(float *)(pFVar2 + lVar12 + 0x14) = fVar15;
      lVar12 = lVar12 + 0x1c;
    } while ((int)uVar13 < (this->Keys).ArrayNum);
  }
  return;
}

// BakeCurve @ 147a337d0

void __thiscall FRichCurve::BakeCurve(FRichCurve *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  wchar_t *in_R9;
  float fVar10;
  undefined1 local_res8 [8];
  float *in_stack_ffffffffffffff58;
  float local_78;
  float fStack_74;
  ForAnyElementType local_70;
  int local_68;
  int aiStack_64 [19];
  
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 != 0) {
    fVar10 = param_1;
    if (iVar4 < 1) {
      in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
      in_stack_ffffffffffffff58 = (float *)0x0;
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
    iVar4 = (this->Keys).ArrayNum;
    uVar7 = iVar4 - 1;
    fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + 4);
    uVar9 = 0;
    if ((int)uVar7 < iVar4) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      in_stack_ffffffffffffff58 = (float *)(longlong)(int)uVar7;
      in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
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
    fVar3 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x1c + 4);
    if ((this->Keys).ArrayNum != 0) {
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      aiStack_64[0] = 0;
      uVar9 = (uint)((fVar3 - fVar2) / param_1 - __real_3f800000);
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      FVar8.Data = local_70.Data;
      iVar4 = local_68;
      if (0 < (int)uVar9) {
        in_R9 = (wchar_t *)&local_70;
        in_stack_ffffffffffffff58 = (float *)0x0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar9,(ForAnyElementType *)in_R9,0,aiStack_64);
        FVar8.Data = local_70.Data;
        iVar4 = local_68;
      }
      while (fVar2 = fVar2 + param_1, local_70.Data = FVar8.Data, local_68 = iVar4, fVar2 < fVar3) {
        fVar10 = fVar2;
        local_78 = fVar2;
        fStack_74 = Eval(this,fVar2,0.0);
        if ((local_70.Data <= (FScriptContainerElement *)&local_78) &&
           ((FScriptContainerElement *)&local_78 < local_70.Data + (longlong)aiStack_64[0] * 8)) {
          in_R9 = 
          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
          ;
          in_stack_ffffffffffffff58 = &local_78;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (local_68 == aiStack_64[0]) {
          local_68 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_70,aiStack_64);
        }
        *(ulonglong *)(local_70.Data + (longlong)local_68 * 8) = CONCAT44(fStack_74,local_78);
        FVar8.Data = local_70.Data;
        iVar4 = local_68 + 1;
      }
      pFVar1 = FVar8.Data + (longlong)iVar4 * 8;
      while( true ) {
        if (local_68 != iVar4) {
          `TCheckedPointerIterator<TTuple<float,float>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar8.Data == pFVar1) break;
        in_stack_ffffffffffffff58 =
             (float *)((ulonglong)in_stack_ffffffffffffff58 & 0xffffffffffffff00);
        UpdateOrAddKey(this,fVar10,*(float *)FVar8.Data,SUB81(in_R9,0),
                       SUB84(in_stack_ffffffffffffff58,0));
        FVar8.Data = FVar8.Data + 8;
      }
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
    }
  }
  return;
}

// BakeCurve @ 147a33aa0

void __thiscall FRichCurve::BakeCurve(FRichCurve *this,float param_1,float param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  wchar_t *in_R9;
  float fVar7;
  undefined1 local_res8 [8];
  float *in_stack_ffffffffffffff58;
  float local_74;
  float fStack_70;
  ForAnyElementType local_68;
  int local_60;
  int aiStack_5c [17];
  
  if ((this->Keys).ArrayNum != 0) {
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    aiStack_5c[0] = 0;
    uVar6 = (uint)((param_3 - param_2) / param_1 - __real_3f800000);
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    fVar7 = param_1;
    FVar5.Data = local_68.Data;
    iVar3 = local_60;
    if (0 < (int)uVar6) {
      in_R9 = (wchar_t *)&local_68;
      in_stack_ffffffffffffff58 = (float *)0x0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar6,(ForAnyElementType *)in_R9,0,aiStack_5c);
      FVar5.Data = local_68.Data;
      iVar3 = local_60;
    }
    while (param_2 = param_1 + param_2, local_68.Data = FVar5.Data, local_60 = iVar3,
          param_2 < param_3) {
      fVar7 = param_2;
      local_74 = param_2;
      fStack_70 = Eval(this,param_2,0.0);
      if ((local_68.Data <= (FScriptContainerElement *)&local_74) &&
         ((FScriptContainerElement *)&local_74 < local_68.Data + (longlong)aiStack_5c[0] * 8)) {
        in_R9 = 
        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
        ;
        in_stack_ffffffffffffff58 = &local_74;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_60 == aiStack_5c[0]) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_68,aiStack_5c);
      }
      *(ulonglong *)(local_68.Data + (longlong)local_60 * 8) = CONCAT44(fStack_70,local_74);
      FVar5.Data = local_68.Data;
      iVar3 = local_60 + 1;
    }
    pFVar1 = FVar5.Data + (longlong)iVar3 * 8;
    while( true ) {
      if (local_60 != iVar3) {
        `TCheckedPointerIterator<TTuple<float,float>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar5.Data == pFVar1) break;
      in_stack_ffffffffffffff58 =
           (float *)((ulonglong)in_stack_ffffffffffffff58 & 0xffffffffffffff00);
      UpdateOrAddKey(this,fVar7,*(float *)FVar5.Data,SUB81(in_R9,0),
                     SUB84(in_stack_ffffffffffffff58,0));
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  return;
}

// CompressCurve @ 147a38a70

void __thiscall
FRichCurve::CompressCurve
          (FRichCurve *this,FCompressedRichCurve *param_1,float param_2,float param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ERichCurveCompressionFormat EVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4 [4];
  int local_b0;
  ERichCurveKeyTimeCompressionFormat local_ac;
  FScriptContainerElement *local_a8;
  
  uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_322bcc77;
  iVar15 = (this->Keys).ArrayNum;
  EVar18 = RCCF_Empty;
  if (iVar15 != 0) {
    if (iVar15 < 2) {
LAB_147a38bfd:
      EVar18 = RCCF_Constant;
    }
    else {
      pFVar14 = (this->Keys).AllocatorInstance.Data;
      pFVar12 = pFVar14;
      while( true ) {
        if ((this->Keys).ArrayNum != iVar15) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar12 == pFVar14 + (longlong)iVar15 * 0x1c) goto LAB_147a38bfd;
        if ((fVar2 < (float)((uint)(*(float *)(pFVar12 + 8) - *(float *)(pFVar14 + 8)) & uVar16)) ||
           (*pFVar12 == (FScriptContainerElement)0x2)) break;
        pFVar12 = pFVar12 + 0x1c;
      }
      if (((this->Keys).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (this->Keys).AllocatorInstance.Data;
      bVar7 = false;
      iVar15 = (this->Keys).ArrayNum;
      pFVar12 = pFVar14;
      while( true ) {
        if ((this->Keys).ArrayNum != iVar15) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar12 == pFVar14 + (longlong)iVar15 * 0x1c) {
          if (!bVar7) {
            FVar8 = *pFVar14;
            if (FVar8 == (FScriptContainerElement)0x0) {
              EVar18 = RCCF_Linear;
              goto LAB_147a38c00;
            }
            if (FVar8 != (FScriptContainerElement)0x1) {
              if (FVar8 != (FScriptContainerElement)0x2) goto LAB_147a38bfd;
              EVar18 = RCCF_Cubic;
              goto LAB_147a38c00;
            }
          }
          EVar18 = RCCF_Mixed;
          goto LAB_147a38c00;
        }
        if ((*pFVar12 == (FScriptContainerElement)0x2) &&
           (pFVar12[2] != (FScriptContainerElement)0x0)) break;
        if (*pFVar12 != *pFVar14) {
          bVar7 = true;
        }
        pFVar12 = pFVar12 + 0x1c;
      }
      EVar18 = RCCF_Weighted;
    }
  }
LAB_147a38c00:
  (param_1->CompressionFormat).Value = (uchar)EVar18;
  local_ac = FindRichCurveKeyFormat(this,param_2,param_3,EVar18);
  (param_1->KeyTimeCompressionFormat).Value = (uchar)local_ac;
  (param_1->PreInfinityExtrap).Value = *(uchar *)((longlong)&this->_padding_ + 4);
  (param_1->PostInfinityExtrap).Value = *(uchar *)((longlong)&this->_padding_ + 5);
  if (EVar18 == RCCF_Empty) {
    param_1->ConstantValueNumKeys = *(TConstantValueNumKeys *)&this->_padding_;
  }
  else {
    if (EVar18 != RCCF_Constant) {
      if (EVar18 == RCCF_Mixed) {
        iVar15 = (this->Keys).ArrayNum;
      }
      else {
        iVar15 = 0;
        if (EVar18 == RCCF_Weighted) {
          iVar15 = (this->Keys).ArrayNum * 2;
        }
      }
      if (local_ac == RCKTCF_uint16) {
        iVar10 = (this->Keys).ArrayNum;
        iVar15 = (iVar10 * 2 + 3 + (iVar15 + 1U & 0xfffffffe) & 0xfffffffc) + 8;
      }
      else {
        if ((local_ac != RCKTCF_float32) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("KeyFormat == RCKTCF_float32",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                               ,0x5f1,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this->Keys).ArrayNum;
        iVar15 = (iVar15 + 3U & 0xfffffffc) + iVar10 * 4;
      }
      uVar16 = iVar15 + iVar10 * 4;
      if (EVar18 == RCCF_Cubic) {
        uVar16 = uVar16 + iVar10 * 8;
      }
      else if (EVar18 == RCCF_Mixed) {
        uVar16 = uVar16 + iVar10 * 8;
      }
      else if (EVar18 == RCCF_Weighted) {
        uVar16 = uVar16 + iVar10 * 0x10;
      }
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      piVar1 = &(param_1->CompressedKeys).ArrayMax;
      (param_1->CompressedKeys).ArrayNum = 0;
      if (*piVar1 != uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar16,&(param_1->CompressedKeys).AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar16,&(param_1->CompressedKeys).AllocatorInstance,
                 &(param_1->CompressedKeys).ArrayNum,piVar1);
      pFVar14 = (param_1->CompressedKeys).AllocatorInstance.Data;
      param_1->ConstantValueNumKeys = (TConstantValueNumKeys)(this->Keys).ArrayNum;
      local_a8 = pFVar14;
      if (EVar18 == RCCF_Mixed) {
        iVar15 = (this->Keys).ArrayNum;
        pFVar12 = (this->Keys).AllocatorInstance.Data;
        pFVar17 = pFVar12 + (longlong)iVar15 * 0x1c;
        while( true ) {
          if ((this->Keys).ArrayNum != iVar15) {
            local_b8 = 0;
            `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_b8);
          }
          if (pFVar12 == pFVar17) break;
          if (*pFVar12 == (FScriptContainerElement)0x0) {
            pFVar12 = pFVar12 + 0x1c;
            *pFVar14 = (FScriptContainerElement)0x2;
            pFVar14 = pFVar14 + 1;
          }
          else {
            FVar8 = (FScriptContainerElement)0x1;
            if (*pFVar12 == (FScriptContainerElement)0x2) {
              FVar8 = (FScriptContainerElement)0x3;
            }
            pFVar12 = pFVar12 + 0x1c;
            *pFVar14 = FVar8;
            pFVar14 = pFVar14 + 1;
          }
        }
      }
      else {
        iVar15 = 0;
        if (EVar18 == RCCF_Weighted) {
          iVar10 = (this->Keys).ArrayNum;
          pFVar12 = (this->Keys).AllocatorInstance.Data;
          local_b0 = iVar10 * 2;
          pFVar17 = pFVar12 + (longlong)iVar10 * 0x1c;
          while( true ) {
            if ((this->Keys).ArrayNum != iVar10) {
              local_b7 = 0;
              `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_b7);
            }
            iVar15 = local_b0;
            if (pFVar12 == pFVar17) break;
            if (*pFVar12 == (FScriptContainerElement)0x0) {
              *pFVar14 = (FScriptContainerElement)0x2;
              pFVar14[1] = pFVar12[2];
              pFVar14 = pFVar14 + 2;
              pFVar12 = pFVar12 + 0x1c;
            }
            else {
              FVar8 = (FScriptContainerElement)0x1;
              if (*pFVar12 == (FScriptContainerElement)0x2) {
                FVar8 = (FScriptContainerElement)0x3;
              }
              *pFVar14 = FVar8;
              pFVar14[1] = pFVar12[2];
              pFVar14 = pFVar14 + 2;
              pFVar12 = pFVar12 + 0x1c;
            }
          }
        }
      }
      iVar10 = (this->Keys).ArrayNum;
      if (local_ac == RCKTCF_uint16) {
        if ((iVar10 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this->Keys).ArrayNum;
        uVar11 = iVar10 - 1;
        fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + 4);
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar6 = __real_477fff00;
        fVar5 = __real_3f800000;
        iVar10 = (this->Keys).ArrayNum;
        pFVar14 = (this->Keys).AllocatorInstance.Data;
        uVar9 = iVar15 + 1U & 0xfffffffe;
        fVar3 = *(float *)(pFVar14 + (longlong)(this->Keys).ArrayNum * 0x1c + -0x18);
        pFVar12 = local_a8 + (int)uVar9;
        fVar20 = __real_3f800000 / (fVar3 - fVar2);
        pFVar17 = pFVar14 + (longlong)iVar10 * 0x1c;
        while( true ) {
          if ((this->Keys).ArrayNum != iVar10) {
            local_b6 = 0;
            `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_b6);
          }
          if (pFVar14 == pFVar17) break;
          fVar19 = (*(float *)(pFVar14 + 4) - fVar2) * fVar20;
          if (fVar5 <= fVar19) {
            fVar19 = fVar5;
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          fVar19 = FMath::RoundHalfFromZero(fVar19 * fVar6);
          *(short *)pFVar12 = (short)(int)fVar19;
          pFVar12 = pFVar12 + 2;
          pFVar14 = pFVar14 + 0x1c;
        }
        uVar9 = uVar9 + iVar10 * 2 + 3 & 0xfffffffc;
        iVar15 = uVar9 + 8;
        *(float *)(local_a8 + (longlong)(int)uVar9 + 4) = fVar3 - fVar2;
        *(float *)(local_a8 + (int)uVar9) = fVar2;
      }
      else {
        pFVar14 = (this->Keys).AllocatorInstance.Data;
        uVar9 = iVar15 + 3U & 0xfffffffc;
        iVar15 = uVar9 + iVar10 * 4;
        pFVar12 = local_a8 + (int)uVar9;
        pFVar17 = pFVar14 + (longlong)iVar10 * 0x1c;
        while( true ) {
          if ((this->Keys).ArrayNum != iVar10) {
            local_b5 = 0;
            `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_b5);
          }
          if (pFVar14 == pFVar17) break;
          *(undefined4 *)pFVar12 = *(undefined4 *)(pFVar14 + 4);
          pFVar12 = pFVar12 + 4;
          pFVar14 = pFVar14 + 0x1c;
        }
      }
      iVar10 = (this->Keys).ArrayNum;
      pFVar14 = (this->Keys).AllocatorInstance.Data;
      pFVar17 = pFVar14 + (longlong)iVar10 * 0x1c;
      pFVar12 = local_a8 + iVar15;
      do {
        if ((this->Keys).ArrayNum != iVar10) {
          local_b4[0] = 0;
          `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_b4);
        }
        if (pFVar14 == pFVar17) {
          if ((longlong)pFVar12 - (longlong)local_a8 == (longlong)(int)uVar16) {
            return;
          }
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("((uint8*)KeyData - BasePtr) == PackedDataSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                             ,0x688,L"");
          if (!bVar7) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)pFVar12 = *(undefined4 *)(pFVar14 + 8);
        pFVar13 = pFVar12 + 4;
        if (EVar18 == RCCF_Mixed) {
LAB_147a3910b:
          *(undefined4 *)pFVar13 = *(undefined4 *)(pFVar14 + 0xc);
          *(undefined4 *)(pFVar12 + 8) = *(undefined4 *)(pFVar14 + 0x14);
          pFVar13 = pFVar12 + 0xc;
          if (EVar18 == RCCF_Weighted) {
            *(undefined4 *)pFVar13 = *(undefined4 *)(pFVar14 + 0x10);
            *(undefined4 *)(pFVar12 + 0x10) = *(undefined4 *)(pFVar14 + 0x18);
            pFVar13 = pFVar12 + 0x14;
          }
        }
        else if ((*pFVar14 == (FScriptContainerElement)0x2) || (EVar18 == RCCF_Weighted)) {
          if (((EVar18 - RCCF_Cubic & 0xfffffffd) != 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("CompressionFormat == RCCF_Cubic || CompressionFormat == RCCF_Mixed|| CompressionFormat == RCCF_Weighted"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                                 ,0x67e,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          goto LAB_147a3910b;
        }
        pFVar14 = pFVar14 + 0x1c;
        pFVar12 = pFVar13;
      } while( true );
    }
    if (((this->Keys).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1->ConstantValueNumKeys =
         *(TConstantValueNumKeys *)((this->Keys).AllocatorInstance.Data + 8);
  }
  piVar1 = &(param_1->CompressedKeys).ArrayMax;
  (param_1->CompressedKeys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(param_1->CompressedKeys).AllocatorInstance,0,piVar1);
  }
  return;
}

// ConvertToChaosCurve @ 147a3a6e0

void __thiscall FRichCurve::ConvertToChaosCurve(FRichCurve *this,FLinearCurve *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  
  piVar1 = &(param_1->Keys).ArrayMax;
  (param_1->Keys).ArrayNum = 0;
  if ((param_1->Keys).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)param_1,0,piVar1);
  }
  iVar2 = (this->Keys).ArrayNum;
  pFVar7 = (this->Keys).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x1c;
  while( true ) {
    if ((this->Keys).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pFVar3 = (param_1->Keys).AllocatorInstance.Data;
    local_28 = *(undefined4 *)(pFVar7 + 4);
    uStack_24 = *(undefined4 *)(pFVar7 + 8);
    if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (param_1->Keys).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Keys).ArrayNum = iVar6 + 1;
    pFVar7 = pFVar7 + 0x1c;
    *(ulonglong *)((param_1->Keys).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         CONCAT44(uStack_24,local_28);
  }
  return;
}

// DeleteKey @ 147a3e5f0

void __thiscall FRichCurve::DeleteKey(FRichCurve *this,FKeyHandle param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  FScriptContainerElement *_Dst;
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
  _Dst = (this->Keys).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x1c;
  iVar7 = (this->Keys).ArrayNum + ~uVar2;
  if (iVar7 != 0) {
    memmove(_Dst,_Dst + 0x1c,(longlong)iVar7 * 0x1c);
  }
  piVar1 = &(this->Keys).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1c,4,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
  AutoSetTangents(this,0.0);
  FKeyHandleMap::Remove((FKeyHandleMap *)&this->_padding_,local_res10);
  return;
}

// Eval @ 147a41080

float __thiscall FRichCurve::Eval(FRichCurve *this,float param_1,float param_2)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0.0;
  local_res10[0] = param_1;
  RemapTimeValue(this,local_res10,local_res8);
  iVar8 = (this->Keys).ArrayNum;
  if (*(float *)&this->_padding_ != __real_7f7fffff) {
    param_2 = *(float *)&this->_padding_;
  }
  if (iVar8 != 0) {
    pTVar1 = &this->Keys;
    if ((iVar8 < 2) || (local_res10[0] < *(float *)((pTVar1->AllocatorInstance).Data + 4))) {
      if ((*(char *)((longlong)&this->_padding_ + 4) == '\x03') && (1 < iVar8)) {
        if (((this->Keys).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        if (((this->Keys).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        fVar14 = *(float *)((pTVar1->AllocatorInstance).Data + 0x20) - *(float *)(pFVar9 + 4);
        iVar8 = (this->Keys).ArrayNum;
        if (__real_322bcc77 < (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if ((iVar8 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          pFVar9 = (pTVar1->AllocatorInstance).Data;
          if (((this->Keys).ArrayNum < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          fVar2 = *(float *)((pTVar1->AllocatorInstance).Data + 0x24);
          fVar3 = *(float *)(pFVar9 + 8);
          if (((this->Keys).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          pFVar9 = (this->Keys).AllocatorInstance.Data;
          if (((this->Keys).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          param_2 = (local_res10[0] - *(float *)(pFVar9 + 4)) * ((fVar2 - fVar3) / fVar14) +
                    *(float *)((pTVar1->AllocatorInstance).Data + 8);
          goto LAB_147a417f4;
        }
        if ((iVar8 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
      }
      else {
        if (((this->Keys).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
      }
      param_2 = *(float *)(pFVar9 + 8);
    }
    else {
      uVar13 = iVar8 - 1;
      uVar12 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < (this->Keys).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar14 = (float)(*pcVar4)();
        return fVar14;
      }
      lVar11 = (longlong)(int)uVar13 * 0x1c;
      pFVar9 = (pTVar1->AllocatorInstance).Data + lVar11 + 4;
      if (*(float *)pFVar9 <= local_res10[0] && local_res10[0] != *(float *)pFVar9) {
        if (*(char *)((longlong)&this->_padding_ + 5) == '\x03') {
          uVar7 = 0;
          if ((int)uVar13 < (this->Keys).ArrayNum) {
            uVar7 = uVar12;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          pFVar9 = (pTVar1->AllocatorInstance).Data;
          uVar10 = iVar8 - 2;
          uVar7 = 0;
          if ((int)uVar10 < (this->Keys).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          fVar14 = *(float *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x1c + 4) -
                   *(float *)(pFVar9 + lVar11 + 4);
          if (__real_322bcc77 < (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            uVar7 = 0;
            if ((int)uVar13 < (this->Keys).ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              fVar14 = (float)(*pcVar4)();
              return fVar14;
            }
            pFVar9 = (pTVar1->AllocatorInstance).Data;
            uVar7 = 0;
            if ((int)uVar10 < (this->Keys).ArrayNum) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              fVar14 = (float)(*pcVar4)();
              return fVar14;
            }
            fVar2 = *(float *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x1c + 8);
            fVar3 = *(float *)(pFVar9 + lVar11 + 8);
            uVar7 = 0;
            if ((int)uVar13 < (this->Keys).ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              fVar14 = (float)(*pcVar4)();
              return fVar14;
            }
            pFVar9 = (pTVar1->AllocatorInstance).Data;
            uVar7 = 0;
            if ((int)uVar13 < (this->Keys).ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              fVar14 = (float)(*pcVar4)();
              return fVar14;
            }
            param_2 = (local_res10[0] - *(float *)(pFVar9 + lVar11 + 4)) *
                      ((fVar2 - fVar3) / fVar14) +
                      *(float *)((pTVar1->AllocatorInstance).Data + lVar11 + 8);
            goto LAB_147a417f4;
          }
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->Keys).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        param_2 = *(float *)((pTVar1->AllocatorInstance).Data + lVar11 + 8);
      }
      else {
        uVar13 = 1;
        iVar8 = iVar8 + -2;
        fVar14 = local_res10[0];
        while (iVar5 = iVar8, local_res10[0] = fVar14, 0 < iVar5) {
          iVar8 = iVar5 / 2;
          uVar7 = iVar8 + uVar13;
          uVar12 = 0;
          if ((int)uVar7 < (this->Keys).ArrayNum) {
            uVar12 = ~uVar7 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          fVar14 = local_res10[0];
          if (*(float *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x1c + 4) <=
              local_res10[0]) {
            uVar13 = uVar7 + 1;
            iVar8 = iVar5 + (-1 - iVar8);
          }
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        uVar12 = uVar13 - 1;
        uVar7 = 0;
        if ((int)uVar12 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        param_2 = UE::Curves::EvalForTwoKeys
                            ((FRichCurveKey *)
                             ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x1c),
                             (FRichCurveKey *)(pFVar9 + (longlong)(int)uVar13 * 0x1c),fVar14);
      }
    }
  }
LAB_147a417f4:
  return param_2 + local_res8[0];
}

// GetConstRefOfKeys @ 147a4ea40

TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> * __thiscall
FRichCurve::GetConstRefOfKeys(FRichCurve *this)

{
  return &this->Keys;
}

// GetCopyOfKeys @ 147a4ea60

TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> * __thiscall
FRichCurve::GetCopyOfKeys
          (FRichCurve *this,
          TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Keys).ArrayNum;
  _Src = (this->Keys).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1c,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x1c);
  return __return_storage_ptr__;
}

// GetFirstKey @ 147a50ab0

FRichCurveKey * __thiscall
FRichCurve::GetFirstKey(FRichCurve *this,FRichCurveKey *__return_storage_ptr__)

{
  undefined8 uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FRichCurveKey *pFVar8;
  
  if ((this->Keys).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Keys.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                       ,0x116,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRichCurveKey *)(*pcVar4)();
      return pFVar8;
    }
  }
  if ((this->Keys).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRichCurveKey *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar3 = (this->Keys).AllocatorInstance.Data;
  uVar5 = *(undefined8 *)pFVar3;
  uVar6 = *(undefined8 *)(pFVar3 + 8);
  uVar1 = *(undefined8 *)(pFVar3 + 0x10);
  fVar2 = *(float *)(pFVar3 + 0x18);
  __return_storage_ptr__->InterpMode = (TEnumAsByte<ERichCurveInterpMode>)(char)uVar5;
  __return_storage_ptr__->TangentMode =
       (TEnumAsByte<ERichCurveTangentMode>)(char)((ulonglong)uVar5 >> 8);
  __return_storage_ptr__->TangentWeightMode =
       (TEnumAsByte<ERichCurveTangentWeightMode>)(char)((ulonglong)uVar5 >> 0x10);
  __return_storage_ptr__->field_0x3 = (char)((ulonglong)uVar5 >> 0x18);
  __return_storage_ptr__->Time = (float)(int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->Value = (float)(int)uVar6;
  __return_storage_ptr__->ArriveTangent = (float)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->ArriveTangentWeight = (float)(int)uVar1;
  __return_storage_ptr__->LeaveTangent = (float)(int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->LeaveTangentWeight = fVar2;
  return __return_storage_ptr__;
}

// GetFirstMatchingKey @ 147a50c00

FRichCurveKey * __thiscall
FRichCurve::GetFirstMatchingKey
          (FRichCurve *this,TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FKeyHandle FVar3;
  int iVar4;
  int *piVar5;
  FRichCurveKey *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FKeyHandle_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar1) {
      return (FRichCurveKey *)0x0;
    }
    FVar3.Index = *(uint *)pFVar7;
    iVar4 = (**(code **)(this->_padding_ + 8))(this);
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar4) {
      FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar4);
    }
    piVar5 = FIndexedCurve::FindIndex((FIndexedCurve *)this,FVar3);
    if (((piVar5 != (int *)0x0) && (-1 < *piVar5)) && (*piVar5 < iVar4)) break;
    pFVar7 = pFVar7 + 4;
  }
  pFVar6 = GetKey(this,(FKeyHandle)*(uint *)pFVar7);
  return pFVar6;
}

// GetKey @ 147a51760

FRichCurveKey * __thiscall FRichCurve::GetKey(FRichCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FRichCurveKey *pFVar7;
  
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
      pFVar7 = (FRichCurveKey *)(*pcVar2)();
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
      pFVar7 = (FRichCurveKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FRichCurveKey *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x1c);
}

// GetKey @ 147a51830

FRichCurveKey * __thiscall
FRichCurve::GetKey(FRichCurve *this,FRichCurveKey *__return_storage_ptr__,FKeyHandle param_1)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  FRichCurveKey *pFVar12;
  longlong lVar13;
  
  iVar9 = (**(code **)(this->_padding_ + 8))();
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar9) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar9);
  }
  puVar11 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
  if (puVar11 == (uint *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FRichCurveKey *)(*pcVar5)();
      return pFVar12;
    }
  }
  uVar2 = *puVar11;
  uVar10 = 0;
  if ((int)uVar2 < (this->Keys).ArrayNum) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FRichCurveKey *)(*pcVar5)();
      return pFVar12;
    }
  }
  pFVar4 = (this->Keys).AllocatorInstance.Data;
  lVar13 = (longlong)(int)uVar2 * 0x1c;
  uVar6 = *(undefined8 *)(pFVar4 + lVar13);
  uVar7 = *(undefined8 *)(pFVar4 + lVar13 + 8);
  uVar1 = *(undefined8 *)(pFVar4 + lVar13 + 0x10);
  fVar3 = *(float *)(pFVar4 + lVar13 + 0x18);
  __return_storage_ptr__->InterpMode = (TEnumAsByte<ERichCurveInterpMode>)(char)uVar6;
  __return_storage_ptr__->TangentMode =
       (TEnumAsByte<ERichCurveTangentMode>)(char)((ulonglong)uVar6 >> 8);
  __return_storage_ptr__->TangentWeightMode =
       (TEnumAsByte<ERichCurveTangentWeightMode>)(char)((ulonglong)uVar6 >> 0x10);
  __return_storage_ptr__->field_0x3 = (char)((ulonglong)uVar6 >> 0x18);
  __return_storage_ptr__->Time = (float)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->Value = (float)(int)uVar7;
  __return_storage_ptr__->ArriveTangent = (float)(int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->ArriveTangentWeight = (float)(int)uVar1;
  __return_storage_ptr__->LeaveTangent = (float)(int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->LeaveTangentWeight = fVar3;
  return __return_storage_ptr__;
}

// GetKeyIndex @ 147a51d80

int __thiscall FRichCurve::GetKeyIndex(FRichCurve *this,float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar8 = 0;
  iVar9 = (this->Keys).ArrayNum + -1;
  if (-1 < iVar9) {
    do {
      iVar6 = iVar9 - iVar8;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = (iVar6 >> 1) + iVar8;
      uVar7 = 0;
      if ((int)uVar1 < (this->Keys).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
      fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x1c + 4);
      if ((float)((uint)(fVar2 - param_1) & uVar4) <= param_2) {
        return uVar1;
      }
      iVar6 = uVar1 + 1;
      if (param_1 <= fVar2) {
        iVar6 = iVar8;
        iVar9 = uVar1 - 1;
      }
      iVar8 = iVar6;
    } while (iVar8 <= iVar9);
  }
  return -1;
}

// GetKeyInterpMode @ 147a52030

ERichCurveInterpMode __thiscall FRichCurve::GetKeyInterpMode(FRichCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  FRichCurveKey local_28;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    return RCIM_Linear;
  }
  pFVar2 = GetKey(this,&local_28,param_1);
  return (ERichCurveInterpMode)(pFVar2->InterpMode).Value;
}

// GetKeyIterator @ 147a520a0

TIndexedContainerIterator<TArray<FRichCurveKey,TSizedDefaultAllocator<32>_>_const_,FRichCurveKey_const_,int>
* __thiscall
FRichCurve::GetKeyIterator
          (FRichCurve *this,
          TIndexedContainerIterator<TArray<FRichCurveKey,TSizedDefaultAllocator<32>_>_const_,FRichCurveKey_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->Keys;
  return __return_storage_ptr__;
}

// GetKeyRef @ 147a520e0

FRichCurveKey * __thiscall FRichCurve::GetKeyRef(FRichCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FRichCurveKey *pFVar7;
  
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
      pFVar7 = (FRichCurveKey *)(*pcVar2)();
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
      pFVar7 = (FRichCurveKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FRichCurveKey *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x1c);
}

// GetKeyTangentMode @ 147a521b0

ERichCurveTangentMode __thiscall FRichCurve::GetKeyTangentMode(FRichCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  FRichCurveKey local_28;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    return RCTM_Auto;
  }
  pFVar2 = GetKey(this,&local_28,param_1);
  return (ERichCurveTangentMode)(pFVar2->TangentMode).Value;
}

// GetKeyTime @ 147a52200

float __thiscall FRichCurve::GetKeyTime(FRichCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  FRichCurveKey local_28;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    return 0.0;
  }
  pFVar2 = GetKey(this,&local_28,param_1);
  return pFVar2->Time;
}

// GetKeyTimeValuePair @ 147a522a0

TTuple<float,float> __thiscall FRichCurve::GetKeyTimeValuePair(FRichCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  undefined4 in_register_00000014;
  TTuple<float,float> TVar2;
  FKeyHandle in_R8D;
  FRichCurveKey local_28;
  
  TVar2._4_4_ = in_register_00000014;
  TVar2._0_4_ = param_1.Index;
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,in_R8D);
  if (!bVar1) {
    *(undefined8 *)TVar2 = 0;
    return TVar2;
  }
  GetKey(this,&local_28,in_R8D);
  *(float *)TVar2 = local_28.Time;
  *(float *)((longlong)TVar2 + 4) = local_28.Value;
  return TVar2;
}

// GetKeyValue @ 147a523f0

float __thiscall FRichCurve::GetKeyValue(FRichCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  FRichCurveKey local_28;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    return 0.0;
  }
  pFVar2 = GetKey(this,&local_28,param_1);
  return pFVar2->Value;
}

// GetLastKey @ 147a52530

FRichCurveKey * __thiscall
FRichCurve::GetLastKey(FRichCurve *this,FRichCurveKey *__return_storage_ptr__)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  FRichCurveKey *pFVar10;
  longlong lVar11;
  uint uVar12;
  
  if ((this->Keys).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Keys.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                       ,0x11d,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FRichCurveKey *)(*pcVar5)();
      return pFVar10;
    }
  }
  iVar2 = (this->Keys).ArrayNum;
  uVar12 = iVar2 - 1;
  uVar9 = 0;
  if ((int)uVar12 < iVar2) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FRichCurveKey *)(*pcVar5)();
      return pFVar10;
    }
  }
  lVar11 = (longlong)(int)uVar12 * 0x1c;
  pFVar4 = (this->Keys).AllocatorInstance.Data;
  uVar6 = *(undefined8 *)(pFVar4 + lVar11);
  uVar7 = *(undefined8 *)(pFVar4 + lVar11 + 8);
  uVar1 = *(undefined8 *)(pFVar4 + lVar11 + 0x10);
  fVar3 = *(float *)(pFVar4 + lVar11 + 0x18);
  __return_storage_ptr__->InterpMode = (TEnumAsByte<ERichCurveInterpMode>)(char)uVar6;
  __return_storage_ptr__->TangentMode =
       (TEnumAsByte<ERichCurveTangentMode>)(char)((ulonglong)uVar6 >> 8);
  __return_storage_ptr__->TangentWeightMode =
       (TEnumAsByte<ERichCurveTangentWeightMode>)(char)((ulonglong)uVar6 >> 0x10);
  __return_storage_ptr__->field_0x3 = (char)((ulonglong)uVar6 >> 0x18);
  __return_storage_ptr__->Time = (float)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->Value = (float)(int)uVar7;
  __return_storage_ptr__->ArriveTangent = (float)(int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->ArriveTangentWeight = (float)(int)uVar1;
  __return_storage_ptr__->LeaveTangent = (float)(int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->LeaveTangentWeight = fVar3;
  return __return_storage_ptr__;
}

// GetTimeRange @ 147a5aa10

void __thiscall FRichCurve::GetTimeRange(FRichCurve *this,float *param_1,float *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 == 0) {
    *param_1 = 0.0;
    *param_2 = 0.0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *param_1 = *(float *)((this->Keys).AllocatorInstance.Data + 4);
    iVar1 = (this->Keys).ArrayNum;
    uVar5 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *param_2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x1c + 4);
  }
  return;
}

// GetValueRange @ 147a5b6d0

void __thiscall FRichCurve::GetValueRange(FRichCurve *this,float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  
  iVar2 = (this->Keys).ArrayNum;
  uVar8 = 0;
  if (iVar2 == 0) {
    *param_2 = 0.0;
    *param_1 = 0.0;
    return;
  }
  if ((iVar2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + 8);
  *param_2 = fVar1;
  *param_1 = fVar1;
  fVar1 = __real_3e4ccccd;
  if (0 < (this->Keys).ArrayNum) {
    uVar9 = uVar8;
    uVar10 = uVar8;
    do {
      uVar7 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar7 < (this->Keys).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Keys).AllocatorInstance.Data;
      fVar11 = *param_1;
      if (*(float *)(pFVar3 + uVar9 + 8) <= *param_1) {
        fVar11 = *(float *)(pFVar3 + uVar9 + 8);
      }
      *param_1 = fVar11;
      fVar11 = *param_2;
      if (*param_2 <= *(float *)(pFVar3 + uVar9 + 8)) {
        fVar11 = *(float *)(pFVar3 + uVar9 + 8);
      }
      *param_2 = fVar11;
      if ((pFVar3[uVar9] == (FScriptContainerElement)0x2) && (uVar10 != (longlong)(iVar2 + -1))) {
        uVar6 = 0;
        if ((int)(uVar7 + 1) < (this->Keys).ArrayNum) {
          uVar6 = ~(uVar7 + 1) >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar11 = *(float *)((this->Keys).AllocatorInstance.Data + uVar9 + 0x20);
        FeaturePointMethod<FRichCurve_const_>
                  (this,*(float *)(pFVar3 + uVar9 + 4),fVar11,*(float *)(pFVar3 + uVar9 + 8),
                   (fVar11 - *(float *)(pFVar3 + uVar9 + 4)) * fVar1,0,3,param_2,param_1);
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + 0x1c;
    } while ((int)(uVar7 + 1) < (this->Keys).ArrayNum);
  }
  return;
}

// IsConstant @ 147a62f80

bool __thiscall FRichCurve::IsConstant(FRichCurve *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 < 2) {
LAB_147a62ff7:
    bVar4 = true;
  }
  else {
    pFVar2 = (this->Keys).AllocatorInstance.Data;
    pFVar5 = pFVar2;
    while( true ) {
      if ((this->Keys).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar2 + (longlong)iVar1 * 0x1c) goto LAB_147a62ff7;
      if ((param_1 < (float)((uint)(*(float *)(pFVar5 + 8) - *(float *)(pFVar2 + 8)) & uVar3)) ||
         (*pFVar5 == (FScriptContainerElement)0x2)) break;
      pFVar5 = pFVar5 + 0x1c;
    }
    bVar4 = false;
  }
  return bVar4;
}

// ReadjustTimeRange @ 147a6e1c0

void __thiscall
FRichCurve::ReadjustTimeRange
          (FRichCurve *this,float param_1,float param_2,bool param_3,float param_4,float param_5)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<unsigned_int> aVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FKeyHandle *pFVar10;
  int *piVar11;
  uint uVar12;
  FKeyHandle FVar13;
  longlong lVar14;
  longlong *this_00;
  undefined1 uVar15;
  wchar_t *pwVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FKeyHandle local_res20 [2];
  float fVar20;
  wchar_t *in_stack_fffffffffffffef8;
  uint local_d8 [2];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  
  fVar20 = SUB84(in_stack_fffffffffffffef8,0);
  pwVar16 = (wchar_t *)(ulonglong)param_3;
  iVar9 = (this->Keys).ArrayNum;
  if (param_3) {
    uVar12 = 0;
    if (0 < iVar9) {
      lVar14 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if (uVar7 == 0) {
          in_stack_fffffffffffffef8 = (wchar_t *)(longlong)(int)uVar12;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        fVar20 = SUB84(in_stack_fffffffffffffef8,0);
        pFVar2 = (this->Keys).AllocatorInstance.Data;
        fVar19 = *(float *)(pFVar2 + lVar14 + 4);
        if (param_4 <= fVar19) {
          *(float *)(pFVar2 + lVar14 + 4) = fVar19 + (param_5 - param_4);
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x1c;
      } while ((int)uVar12 < (this->Keys).ArrayNum);
    }
  }
  else {
    bVar5 = false;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    local_d8[0] = 0;
    fVar19 = param_1;
    if (0 < iVar9) {
      do {
        uVar12 = local_d8[0];
        uVar7 = 0;
        if ((int)local_d8[0] < (this->Keys).ArrayNum) {
          uVar7 = ~local_d8[0] >> 0x1f;
        }
        if (uVar7 == 0) {
          pwVar16 = L"Array index out of bounds: %lld into an array of size %lld";
          in_stack_fffffffffffffef8 = (wchar_t *)(longlong)(int)local_d8[0];
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = (this->Keys).AllocatorInstance.Data;
        fVar20 = *(float *)(pFVar2 + (longlong)(int)uVar12 * 0x1c + 4);
        if (fVar20 < param_4) {
          if (param_5 < fVar20) goto LAB_147a6e438;
        }
        else if (param_5 < fVar20) {
LAB_147a6e438:
          *(float *)(pFVar2 + (longlong)(int)uVar12 * 0x1c + 4) = fVar20 - (param_5 - param_4);
        }
        else {
          bVar5 = true;
          fVar19 = param_5;
          if (param_4 != 0.0) {
            fVar19 = param_4;
          }
          Eval(this,fVar19,0.0);
          if ((local_d0.Data <= (FScriptContainerElement *)local_d8) &&
             ((FScriptContainerElement *)local_d8 < local_d0.Data + (longlong)local_c8._4_4_ * 4)) {
            pwVar16 = 
            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
            ;
            in_stack_fffffffffffffef8 = (wchar_t *)local_d8;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar9 = (int)local_c8;
          if ((int)local_c8 == local_c8._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_d0,(int *)((longlong)&local_c8 + 4));
          }
          local_c8 = CONCAT44(local_c8._4_4_,iVar9 + 1);
          *(uint *)(local_d0.Data + (longlong)iVar9 * 4) = local_d8[0];
        }
        fVar20 = SUB84(in_stack_fffffffffffffef8,0);
        local_d8[0] = local_d8[0] + 1;
      } while ((int)local_d8[0] < (this->Keys).ArrayNum);
      if (bVar5) {
        uVar12 = (int)local_c8 - 1;
        if (-1 < (int)uVar12) {
          pwVar16 = (wchar_t *)(longlong)(int)uVar12;
          lVar14 = (longlong)pwVar16 * 4;
          do {
            uVar7 = 0;
            if ((int)uVar12 < (int)local_c8) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (in_stack_fffffffffffffef8 = pwVar16,
               bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this_00 = &this->_padding_;
            iVar9 = *(int *)(local_d0.Data + lVar14);
            if ((iVar9 < 0) || (iVar8 = (**(code **)(this->_padding_ + 8))(this), iVar8 <= iVar9)) {
              FVar13.Index = 0;
            }
            else {
              pFVar10 = FKeyHandleMap::FindKey((FKeyHandleMap *)this_00,iVar9);
              if (pFVar10 == (FKeyHandle *)0x0) {
                LOCK();
                aVar4 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
                UNLOCK();
                local_res20[0].Index = (int)LastKeyHandleIndex + 1;
                LastKeyHandleIndex = aVar4;
                if ((local_res20[0].Index == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index != 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                                       ,0x1c,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                FKeyHandleMap::Add((FKeyHandleMap *)this_00,local_res20,iVar9);
              }
              pFVar10 = FKeyHandleMap::FindKey((FKeyHandleMap *)&this->_padding_,iVar9);
              FVar13.Index = pFVar10->Index;
            }
            iVar9 = (**(code **)(this->_padding_ + 8))(this);
            if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar9) {
              FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)this_00,iVar9);
            }
            piVar11 = FIndexedCurve::FindIndex((FIndexedCurve *)this,FVar13);
            if (((piVar11 != (int *)0x0) && (-1 < *piVar11)) && (*piVar11 < iVar9)) {
              DeleteKey(this,FVar13);
            }
            fVar20 = SUB84(in_stack_fffffffffffffef8,0);
            lVar14 = lVar14 + -4;
            pwVar16 = (wchar_t *)((longlong)pwVar16 + -1);
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        fVar20 = (float)((uint)fVar20 & 0xffffff00);
        UpdateOrAddKey(this,fVar19,param_4,SUB81(pwVar16,0),fVar20);
      }
    }
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  iVar9 = (this->Keys).ArrayNum;
  uVar15 = (undefined1)iVar9;
  if (2 < iVar9) {
    uVar15 = (undefined1)(iVar9 + -1);
    fVar20 = 0.0;
    RemoveRedundantKeysInternal(this,0.0,0,iVar9 + -1,(FFrameRate)0x0);
  }
  iVar9 = (this->Keys).ArrayNum;
  if (iVar9 == 0) {
    fVar19 = 0.0;
    fVar18 = 0.0;
  }
  else {
    if (iVar9 < 1) {
      uVar15 = 0x50;
      fVar20 = 0.0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar9 = (this->Keys).ArrayNum;
    fVar18 = (float)(iVar9 - 1);
    fVar19 = *(float *)((this->Keys).AllocatorInstance.Data + 4);
    uVar12 = 0;
    if ((int)fVar18 < iVar9) {
      uVar12 = ~(uint)fVar18 >> 0x1f;
    }
    if (uVar12 == 0) {
      uVar15 = 0x50;
      fVar20 = fVar18;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar18 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)fVar18 * 0x1c + 4);
  }
  if (param_1 > fVar19) {
    fVar17 = param_1;
    Eval(this,param_1,0.0);
    fVar20 = (float)((uint)fVar20 & 0xffffff00);
    UpdateOrAddKey(this,fVar17,param_1,(bool)uVar15,fVar20);
  }
  if (fVar18 <= param_2) {
    if (param_1 <= fVar19) {
      return;
    }
  }
  else {
    fVar19 = param_2;
    Eval(this,param_2,0.0);
    UpdateOrAddKey(this,fVar19,param_2,(bool)uVar15,(float)((uint)fVar20 & 0xffffff00));
  }
  iVar9 = (**(code **)(this->_padding_ + 8))(this);
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar9) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar9);
  }
  uVar12 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar14 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->Keys).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Keys).AllocatorInstance.Data + lVar14 + 4;
      if (*(float *)pFVar2 <= param_1 && param_1 != *(float *)pFVar2) {
LAB_147a6e82f:
        if ((-1 < (int)uVar12) && ((int)uVar12 < (int)this->_padding_)) {
          if (((int)uVar12 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar1 = (uint *)(this->_padding_ + (longlong)(int)uVar12 * 4);
          if (puVar1 != (uint *)0x0) {
            FVar13.Index = *puVar1;
            iVar9 = (**(code **)(this->_padding_ + 8))(this);
            if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar9) {
              FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar9);
            }
            piVar11 = FIndexedCurve::FindIndex((FIndexedCurve *)this,FVar13);
            if (((piVar11 != (int *)0x0) && (-1 < *piVar11)) && (*piVar11 < iVar9)) {
              DeleteKey(this,(FKeyHandle)*puVar1);
              uVar12 = uVar12 - 1;
              lVar14 = lVar14 + -0x1c;
            }
          }
        }
      }
      else {
        uVar7 = 0;
        if ((int)uVar12 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (param_2 < *(float *)((this->Keys).AllocatorInstance.Data + lVar14 + 4))
        goto LAB_147a6e82f;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x1c;
    } while ((int)uVar12 < (this->Keys).ArrayNum);
  }
  return;
}

// RemapTimeValue @ 147a795c0

void __thiscall FRichCurve::RemapTimeValue(FRichCurve *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res8 [2];
  uint local_res20 [2];
  
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 < 2) {
    return;
  }
  if (*(float *)((this->Keys).AllocatorInstance.Data + 4) < *param_1) {
    uVar9 = iVar4 - 1;
    uVar10 = ~uVar9 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar9 < (this->Keys).ArrayNum) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar11 = (longlong)(int)uVar9 * 0x1c;
    fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar11 + 4);
    if (*param_1 <= fVar1 && fVar1 != *param_1) {
      return;
    }
    cVar3 = *(char *)((longlong)&this->_padding_ + 5);
    if (cVar3 == '\x03') {
      return;
    }
    if (cVar3 == '\x04') {
      return;
    }
    if (((this->Keys).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + 4);
    uVar8 = 0;
    if ((int)uVar9 < (this->Keys).ArrayNum) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_res20[0] = 0;
    fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + lVar11 + 4);
    FRealCurve::CycleTime(fVar1,fVar2,param_1,(int *)local_res20);
    cVar3 = *(char *)((longlong)&this->_padding_ + 5);
    if (cVar3 == '\x01') {
      if (((this->Keys).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Keys).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar9 < (this->Keys).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *param_2 = (*(float *)((this->Keys).AllocatorInstance.Data + lVar11 + 8) -
                 *(float *)(pFVar5 + 8)) * (float)(int)local_res20[0];
      return;
    }
  }
  else {
    cVar3 = *(char *)((longlong)&this->_padding_ + 4);
    if (cVar3 == '\x03') {
      return;
    }
    if (cVar3 == '\x04') {
      return;
    }
    if ((iVar4 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = iVar4 - 1;
    fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + 4);
    uVar9 = 0;
    if ((int)uVar8 < (this->Keys).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_res8[0] = 0;
    fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x1c + 4);
    FRealCurve::CycleTime(fVar1,fVar2,param_1,(int *)local_res8);
    cVar3 = *(char *)((longlong)&this->_padding_ + 4);
    local_res20[0] = local_res8[0];
    if (cVar3 == '\x01') {
      uVar9 = 0;
      if ((int)uVar8 < (this->Keys).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Keys).AllocatorInstance.Data;
      if (((this->Keys).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *param_2 = (*(float *)((this->Keys).AllocatorInstance.Data + 8) -
                 *(float *)(pFVar5 + (longlong)(int)uVar8 * 0x1c + 8)) * (float)(int)local_res8[0];
      return;
    }
  }
  if (cVar3 == '\x02') {
    local_res20[0] = local_res20[0] & 0x80000001;
    if ((int)local_res20[0] < 0) {
      local_res20[0] = (local_res20[0] - 1 | 0xfffffffe) + 1;
    }
    if (local_res20[0] == 1) {
      *param_1 = (fVar2 - *param_1) + fVar1;
    }
  }
  return;
}

// RemoveRedundantAutoTangentKeys @ 147a7be20

void __thiscall FRichCurve::RemoveRedundantAutoTangentKeys(FRichCurve *this,float param_1)

{
  int iVar1;
  
  iVar1 = (this->Keys).ArrayNum;
  if (2 < iVar1) {
    RemoveRedundantKeysInternal(this,param_1,0,iVar1 + -1,(FFrameRate)0x0);
  }
  return;
}

// RemoveRedundantAutoTangentKeys @ 147a7be50

void __thiscall
FRichCurve::RemoveRedundantAutoTangentKeys
          (FRichCurve *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < param_3) {
    uVar4 = 0;
    uVar6 = 0xffffffff;
    if (0 < (this->Keys).ArrayNum) {
      lVar5 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar4 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar5 + 4);
        if (fVar1 <= param_2) {
          uVar6 = uVar4;
        }
        uVar7 = uVar4;
        if (param_3 <= fVar1) break;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x1c;
        uVar7 = 0xffffffff;
      } while ((int)uVar4 < (this->Keys).ArrayNum);
      if ((uVar6 != 0xffffffff) && (uVar7 != 0xffffffff)) {
        RemoveRedundantKeysInternal(this,param_1,uVar6,uVar7,(FFrameRate)0x0);
      }
    }
  }
  return;
}

// RemoveRedundantKeys @ 147a7c2d0

void __thiscall
FRichCurve::RemoveRedundantKeys
          (FRichCurve *this,float param_1,float param_2,float param_3,FFrameRate param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < param_3) {
    uVar4 = 0;
    uVar6 = 0xffffffff;
    if (0 < (this->Keys).ArrayNum) {
      lVar5 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar4 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar5 + 4);
        if (fVar1 <= param_2) {
          uVar6 = uVar4;
        }
        uVar7 = uVar4;
        if (param_3 <= fVar1) break;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x1c;
        uVar7 = 0xffffffff;
      } while ((int)uVar4 < (this->Keys).ArrayNum);
      if ((uVar6 != 0xffffffff) && (uVar7 != 0xffffffff)) {
        RemoveRedundantKeysInternal(this,param_1,uVar6,uVar7,param_4);
      }
    }
  }
  return;
}

// RemoveRedundantKeys @ 147a7c3f0

void __thiscall FRichCurve::RemoveRedundantKeys(FRichCurve *this,float param_1,FFrameRate param_2)

{
  int iVar1;
  
  iVar1 = (this->Keys).ArrayNum;
  if (2 < iVar1) {
    RemoveRedundantKeysInternal(this,param_1,0,iVar1 + -1,param_2);
  }
  return;
}

// RemoveRedundantKeysInternal @ 147a7c940

void __thiscall
FRichCurve::RemoveRedundantKeysInternal
          (FRichCurve *this,float param_1,int param_2,int param_3,FFrameRate param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  FRichCurveKey *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 local_res8 [8];
  float local_res10;
  ForAnyElementType local_218;
  int local_210;
  int iStack_20c;
  ForAnyElementType local_208;
  undefined8 local_200;
  char local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  int local_1e8;
  longlong local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  ForAnyElementType local_1c8;
  int local_1c0 [3];
  uint local_1b4;
  int local_1b0;
  float fStack_1ac;
  longlong local_1a8;
  longlong local_1a0;
  int local_198;
  float fStack_194;
  longlong local_190;
  int local_188;
  int local_184;
  longlong local_180;
  longlong *local_178;
  int iStack_170;
  uint uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<FKeyHandle_const_,int> local_108 [2];
  undefined4 local_dc;
  
  iVar17 = (this->Keys).ArrayNum;
  if (2 < iVar17) {
    uVar22 = iVar17 - 1;
    uVar23 = 0;
    if (0 < param_2) {
      uVar23 = param_2;
    }
    if (param_3 < (int)uVar22) {
      uVar22 = param_3;
    }
    local_res10 = param_1;
    local_1f4 = uVar23;
    local_1d8 = uVar22;
    if (((int)uVar22 <= (int)uVar23) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActualStartKeepKey < ActualEndKeepKey",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                            ,0x3cc,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (1 < (int)(uVar22 - uVar23)) {
      local_1e8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
      local_1c8.Data = (FScriptContainerElement *)0x0;
      local_1c0[0] = 0;
      local_1c0[1] = 0;
      local_208.Data = (FScriptContainerElement *)0x0;
      local_200 = 0;
      if (local_1e8 != 0) {
        if ((local_1e8 != (this->Keys).ArrayNum) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("KeyHandlesToIndices.Num() == Keys.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                                ,0x3db,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar17 = (this->Keys).ArrayNum;
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar17,&local_1c8,local_1c0,local_1c0 + 1);
        memset(local_1c8.Data + (longlong)iVar14 * 4,0,(longlong)iVar17 << 2);
        uVar22 = (this->Keys).ArrayNum;
        if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
        }
        if (local_200._4_4_ < (int)uVar22) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar22,&local_208,(int)local_200,(int *)((longlong)&local_200 + 4));
        }
        uVar22 = (uint)this->_padding_;
        plVar1 = &this->_padding_;
        iStack_170 = 0;
        plVar2 = &this->_padding_;
        local_158 = 0;
        uStack_16c = 1;
        uStack_15c = 0;
        if (uVar22 != 0) {
          plVar21 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar21 = plVar1;
          }
          uVar23 = (uint)*plVar21;
          while (uVar23 == 0) {
            lVar15 = (longlong)iStack_170;
            local_158 = local_158 + 0x20;
            iStack_170 = iStack_170 + 1;
            uStack_15c = uVar22;
            if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_170)
            goto LAB_147a7cb3d;
            uVar23 = *(uint *)((longlong)plVar21 + lVar15 * 4 + 4);
          }
          uStack_16c = -uVar23 & uVar23;
          uVar27 = (ulonglong)uStack_16c * 2 + 1;
          lVar15 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_188 = (int)lVar15;
          uStack_15c = local_188 + -1 + local_158;
          if ((int)uVar22 < (int)uStack_15c) {
            uStack_15c = uVar22;
          }
        }
LAB_147a7cb3d:
        uVar20 = (uint)this->_padding_;
        uStack_154 = local_dc;
        uVar23 = uVar20 & 0xffffffe0;
        iStack_150 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
        uStack_160 = 0xffffffff;
        TStack_140._padding_ = CONCAT44(uStack_16c,iStack_170);
        iVar17 = (int)uVar20 >> 5;
        TStack_140._28_4_ = local_dc;
        TStack_140.BaseBitIndex = local_158;
        uStack_120 = CONCAT44(uStack_14c,iStack_150);
        TStack_140.UnvisitedBitMask = 0xffffffff;
        local_178 = plVar2;
        local_168 = plVar1;
        local_148 = plVar2;
        TStack_140.CurrentBitIndex = uStack_15c;
        TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
        if (((int)uVar20 < 0) || ((int)uVar22 < (int)uVar20)) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L"");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar22 = (uint)this->_padding_;
        if (uVar20 != uVar22) {
          plVar21 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar21 = plVar1;
          }
          uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)plVar21 + (longlong)iVar17 * 4)
          ;
          while (uVar20 == 0) {
            lVar15 = (longlong)iVar17;
            uVar23 = uVar23 + 0x20;
            iVar17 = iVar17 + 1;
            uVar20 = uVar22;
            if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_147a7cc40;
            uVar20 = *(uint *)((longlong)plVar21 + lVar15 * 4 + 4);
          }
          uVar27 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_184 = (int)lVar15;
          uVar20 = local_184 + -1 + uVar23;
          if ((int)uVar22 < (int)uVar20) {
            uVar20 = uVar22;
          }
        }
LAB_147a7cc40:
        while( true ) {
          plVar21 = local_148;
          if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
            local_res8[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_140.CurrentBitIndex == uVar20) &&
              (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
             (uVar23 = local_1f4, plVar21 == plVar2)) break;
          lVar15 = *plVar21;
          uVar22 = *(uint *)(lVar15 + 4 + (longlong)TStack_140.CurrentBitIndex * 0x10);
          uVar36 = *(undefined4 *)(lVar15 + (longlong)TStack_140.CurrentBitIndex * 0x10);
          uVar23 = 0;
          if ((int)uVar22 < local_1c0[0]) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if (uVar23 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          *(undefined4 *)(local_1c8.Data + (longlong)(int)uVar22 * 4) = uVar36;
          TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
        }
      }
      uVar22 = (this->Keys).ArrayNum;
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210 = 0;
      iStack_20c = 0;
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (0 < (int)uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,uVar22,&local_218,0,&iStack_20c);
      }
      uVar20 = 0;
      uVar22 = uVar23;
      if (-1 < (int)uVar23) {
        lVar26 = 0;
        lVar15 = 0;
        do {
          uVar22 = 0;
          if ((int)uVar20 < (this->Keys).ArrayNum) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if (uVar22 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pFVar19 = (this->Keys).AllocatorInstance.Data + lVar15;
          if ((local_218.Data <= pFVar19) &&
             (pFVar19 < local_218.Data + (longlong)iStack_20c * 0x1c)) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (local_210 == iStack_20c) {
            local_210 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x41c,&local_218,&iStack_20c);
          }
          lVar16 = (longlong)local_210 * 0x1c;
          local_210 = local_210 + 1;
          uVar9 = *(undefined8 *)(pFVar19 + 8);
          *(undefined8 *)(local_218.Data + lVar16) = *(undefined8 *)pFVar19;
          *(undefined8 *)(local_218.Data + lVar16 + 8) = uVar9;
          *(undefined8 *)(local_218.Data + lVar16 + 0x10) = *(undefined8 *)(pFVar19 + 0x10);
          *(undefined4 *)(local_218.Data + lVar16 + 0x18) = *(undefined4 *)(pFVar19 + 0x18);
          if (local_1e8 != 0) {
            uVar22 = 0;
            if ((int)uVar20 < local_1c0[0]) {
              uVar22 = ~uVar20 >> 0x1f;
            }
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pFVar19 = local_1c8.Data + lVar26 * 4;
            if ((local_208.Data <= pFVar19) &&
               (pFVar19 < local_208.Data + (longlong)local_200._4_4_ * 4)) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar17 = (int)local_200;
            if ((int)local_200 == local_200._4_4_) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_208,(int *)((longlong)&local_200 + 4));
            }
            local_200 = CONCAT44(local_200._4_4_,iVar17 + 1);
            *(undefined4 *)(local_208.Data + (longlong)iVar17 * 4) = *(undefined4 *)pFVar19;
          }
          uVar20 = uVar20 + 1;
          lVar26 = lVar26 + 1;
          lVar15 = lVar15 + 0x1c;
          uVar22 = local_1f4;
        } while (lVar26 <= (int)uVar23);
      }
      dVar12 = __real_c1e0000000000000;
      dVar11 = __real_41dfffffffc00000;
      uVar23 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      dVar10 = __real_3ff0000000000000;
      uVar20 = uVar22 + 1;
      lVar15 = (longlong)(int)local_1d8;
      uVar27 = 0;
      local_1e0 = (longlong)(int)uVar20;
      local_1f0 = 0;
      local_1f8 = 0 < param_4.Denominator;
      if (local_1e0 < lVar15) {
        local_1ec = uVar22 + 2;
        uVar36 = SUB84(__real_41dfffffffc00000,0);
        uVar37 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
        uVar38 = SUB84(__real_c1e0000000000000,0);
        uVar39 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
        local_1a0 = local_1e0 * 0x1c;
        local_190 = 0;
        do {
          lVar15 = local_190;
          iVar17 = (this->Keys).ArrayNum;
          uVar22 = (uint)uVar27;
          local_1f4 = ~uVar22 >> 0x1f;
          if (local_1f8 == '\0') {
            uVar24 = 0;
            if ((int)uVar22 < iVar17) {
              uVar24 = local_1f4;
            }
            if (uVar24 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            FVar5 = (this->Keys).AllocatorInstance.Data[lVar15 * 0x1c + 1];
            if ((FVar5 == (FScriptContainerElement)0x1) || (FVar5 == (FScriptContainerElement)0x2))
            goto LAB_147a7d78e;
            lVar15 = local_1e0 + 1;
            uVar24 = ~(uVar20 + 1) >> 0x1f;
            uVar22 = 0;
            if ((int)(uVar20 + 1) < (this->Keys).ArrayNum) {
              uVar22 = uVar24;
            }
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            FVar5 = (this->Keys).AllocatorInstance.Data[lVar15 * 0x1c + 1];
            if ((FVar5 == (FScriptContainerElement)0x1) || (FVar5 == (FScriptContainerElement)0x2))
            goto LAB_147a7d78e;
            uVar18 = ~uVar20 >> 0x1f;
            uVar22 = 0;
            if ((int)uVar20 < (this->Keys).ArrayNum) {
              uVar22 = uVar18;
            }
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar15 = local_1e0 * 0x1c;
            FVar5 = (this->Keys).AllocatorInstance.Data[lVar15 + 1];
            if ((FVar5 == (FScriptContainerElement)0x1) || (FVar5 == (FScriptContainerElement)0x2))
            goto LAB_147a7d78e;
            uVar22 = 0;
            if ((int)uVar20 < (this->Keys).ArrayNum) {
              uVar22 = uVar18;
            }
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            fVar4 = *(float *)((this->Keys).AllocatorInstance.Data + lVar15 + 8);
            uVar22 = 0;
            if ((int)uVar20 < (this->Keys).ArrayNum) {
              uVar22 = uVar18;
            }
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            fVar29 = *(float *)((this->Keys).AllocatorInstance.Data + local_1e0 * 0x1c + 4);
            uVar22 = 0;
            if ((int)(uVar20 + 1) < (this->Keys).ArrayNum) {
              uVar22 = uVar24;
            }
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar27 = (ulonglong)(int)local_1f0;
            pFVar19 = (this->Keys).AllocatorInstance.Data;
            uVar22 = 0;
            if ((int)local_1f0 < (this->Keys).ArrayNum) {
              uVar22 = local_1f4;
            }
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            in_XMM2 = ZEXT416((uint)fVar29);
            fVar29 = UE::Curves::EvalForTwoKeys
                               ((FRichCurveKey *)
                                ((this->Keys).AllocatorInstance.Data + uVar27 * 0x1c),
                                (FRichCurveKey *)(pFVar19 + (longlong)(int)(uVar20 + 1) * 0x1c),
                                fVar29);
            lVar15 = local_1d0;
            if (param_1 < (float)((uint)(fVar29 - fVar4) & uVar23)) goto LAB_147a7d78e;
          }
          else {
            uVar24 = 0;
            if ((int)uVar22 < iVar17) {
              uVar24 = local_1f4;
            }
            if (uVar24 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            dVar8 = (double)param_4.Numerator;
            dVar32 = dVar10 / (double)param_4.Denominator;
            dVar31 = (double)*(float *)((this->Keys).AllocatorInstance.Data + lVar15 * 0x1c + 4) *
                     dVar8 * dVar32;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = dVar31;
            auVar30 = roundpd(in_XMM2,auVar30,1);
            dVar31 = dVar31 - auVar30._0_8_;
            uVar33 = auVar30._0_4_;
            uVar34 = auVar30._4_4_;
            if (dVar11 <= auVar30._0_8_) {
              uVar33 = uVar36;
              uVar34 = uVar37;
            }
            if ((double)CONCAT44(uVar34,uVar33) <= dVar12) {
              uVar33 = uVar38;
              uVar34 = uVar39;
            }
            local_198 = (int)dVar31;
            fStack_194 = (float)dVar31 - (float)local_198;
            if ((0.0 < fStack_194) && (::FFrameTime::MaxSubframe <= fStack_194)) {
              fStack_194 = ::FFrameTime::MaxSubframe;
            }
            if (::FFrameTime::MaxSubframe <= fStack_194) {
              fStack_194 = ::FFrameTime::MaxSubframe;
            }
            lVar15 = local_1e0 + 1;
            if (fStack_194 <= 0.0) {
              fStack_194 = 0.0;
            }
            local_198 = (int)(double)CONCAT44(uVar34,uVar33) + local_198;
            uVar22 = ~(uVar20 + 1) >> 0x1f;
            uVar24 = 0;
            if (local_1ec < (this->Keys).ArrayNum) {
              uVar24 = uVar22;
            }
            local_1b4 = uVar22;
            if (uVar24 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            dVar32 = (double)*(float *)((this->Keys).AllocatorInstance.Data + lVar15 * 0x1c + 4) *
                     dVar8 * dVar32;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = dVar32;
            in_XMM2 = roundpd(auVar30,auVar7,1);
            dVar32 = dVar32 - in_XMM2._0_8_;
            uVar33 = in_XMM2._0_4_;
            uVar34 = in_XMM2._4_4_;
            if (dVar11 <= in_XMM2._0_8_) {
              uVar33 = uVar36;
              uVar34 = uVar37;
            }
            if ((double)CONCAT44(uVar34,uVar33) <= dVar12) {
              uVar33 = uVar38;
              uVar34 = uVar39;
            }
            local_1b0 = (int)dVar32;
            fStack_1ac = (float)dVar32 - (float)local_1b0;
            if ((0.0 < fStack_1ac) && (::FFrameTime::MaxSubframe <= fStack_1ac)) {
              fStack_1ac = ::FFrameTime::MaxSubframe;
            }
            if (::FFrameTime::MaxSubframe <= fStack_1ac) {
              fStack_1ac = ::FFrameTime::MaxSubframe;
            }
            lVar15 = CONCAT44(fStack_194,local_198);
            if (fStack_1ac <= 0.0) {
              fStack_1ac = 0.0;
            }
            local_1b0 = (int)(double)CONCAT44(uVar34,uVar33) + local_1b0;
            local_1c0[2] = ~uVar20 >> 0x1f;
            uVar24 = 0;
            if ((int)uVar20 < (this->Keys).ArrayNum) {
              uVar24 = local_1c0[2];
            }
            local_1a8 = lVar15;
            if (uVar24 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            fVar29 = fStack_1ac;
            fVar4 = *(float *)((this->Keys).AllocatorInstance.Data + local_1a0 + 4);
            iVar17 = (int)local_1a8;
            while( true ) {
              local_1d0._4_4_ = (float)((ulonglong)lVar15 >> 0x20);
              if ((local_1b0 <= iVar17) && ((iVar17 != local_1b0 || (fVar29 < local_1d0._4_4_))))
              goto LAB_147a7d994;
              uVar24 = 0;
              if ((int)(uVar20 + 1) < (this->Keys).ArrayNum) {
                uVar24 = uVar22;
              }
              fVar35 = (float)(((double)((longlong)iVar17 * (longlong)param_4.Denominator) +
                               (double)local_1d0._4_4_ * (double)param_4.Denominator) / dVar8);
              local_180 = lVar15;
              if (uVar24 == 0) {
                local_1d0 = lVar15;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              lVar15 = (longlong)(int)local_1f0;
              pFVar19 = (this->Keys).AllocatorInstance.Data;
              local_1d0 = (longlong)(int)(uVar20 + 1) * 0x1c;
              uVar22 = 0;
              if ((int)local_1f0 < (this->Keys).ArrayNum) {
                uVar22 = local_1f4;
              }
              if (uVar22 == 0) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              fVar28 = UE::Curves::EvalForTwoKeys
                                 ((FRichCurveKey *)
                                  ((this->Keys).AllocatorInstance.Data + lVar15 * 0x1c),
                                  (FRichCurveKey *)(pFVar19 + local_1d0),fVar35);
              uVar22 = local_1f0;
              iVar17 = (this->Keys).ArrayNum;
              if (fVar4 < fVar35) {
                uVar22 = 0;
                if ((int)uVar20 < iVar17) {
                  uVar22 = local_1c0[2];
                }
                if (uVar22 == 0) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                pFVar25 = (FRichCurveKey *)
                          ((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x1c);
                uVar24 = 0;
                if ((int)(uVar20 + 1) < (this->Keys).ArrayNum) {
                  uVar24 = local_1b4;
                }
                lVar15 = local_1d0;
                uVar22 = local_1f0;
                if (uVar24 == 0) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  lVar15 = local_1d0;
                  uVar22 = local_1f0;
                  if (bVar13) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
              }
              else {
                uVar24 = 0;
                if ((int)local_1f0 < iVar17) {
                  uVar24 = local_1f4;
                }
                if (uVar24 == 0) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                pFVar25 = (FRichCurveKey *)((this->Keys).AllocatorInstance.Data + lVar15 * 0x1c);
                uVar24 = 0;
                if ((int)uVar20 < (this->Keys).ArrayNum) {
                  uVar24 = local_1c0[2];
                }
                if (uVar24 == 0) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                lVar15 = (longlong)(int)uVar20 * 0x1c;
              }
              uVar27 = (ulonglong)uVar22;
              in_XMM2 = ZEXT416((uint)fVar35);
              fVar35 = UE::Curves::EvalForTwoKeys
                                 (pFVar25,(FRichCurveKey *)
                                          ((this->Keys).AllocatorInstance.Data + lVar15),fVar35);
              if (local_res10 < (float)((uint)(fVar28 - fVar35) & uVar23)) break;
              iVar17 = (int)local_1a8 + 1;
              local_1a8 = CONCAT44(local_1a8._4_4_,iVar17);
              lVar15 = local_1a8;
              uVar22 = local_1b4;
            }
LAB_147a7d78e:
            lVar26 = local_1e0;
            uVar27 = (ulonglong)uVar20;
            local_190 = local_1e0;
            uVar22 = 0;
            if ((int)uVar20 < (this->Keys).ArrayNum) {
              uVar22 = ~uVar20 >> 0x1f;
            }
            local_1f0 = uVar20;
            if (uVar22 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pFVar19 = (this->Keys).AllocatorInstance.Data + lVar26 * 0x1c;
            if ((local_218.Data <= pFVar19) &&
               (pFVar19 < local_218.Data + (longlong)iStack_20c * 0x1c)) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if (local_210 == iStack_20c) {
              local_210 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x41c,&local_218,&iStack_20c);
            }
            lVar15 = (longlong)local_210 * 0x1c;
            local_210 = local_210 + 1;
            uVar9 = *(undefined8 *)(pFVar19 + 8);
            *(undefined8 *)(local_218.Data + lVar15) = *(undefined8 *)pFVar19;
            *(undefined8 *)(local_218.Data + lVar15 + 8) = uVar9;
            *(undefined8 *)(local_218.Data + lVar15 + 0x10) = *(undefined8 *)(pFVar19 + 0x10);
            *(undefined4 *)(local_218.Data + lVar15 + 0x18) = *(undefined4 *)(pFVar19 + 0x18);
            lVar15 = local_1d0;
            if (local_1e8 != 0) {
              uVar22 = 0;
              if ((int)uVar20 < local_1c0[0]) {
                uVar22 = ~uVar20 >> 0x1f;
              }
              if (uVar22 == 0) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar19 = local_1c8.Data + lVar26 * 4;
              if ((local_208.Data <= pFVar19) &&
                 (pFVar19 < local_208.Data + (longlong)local_200._4_4_ * 4)) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar13) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              iVar17 = (int)local_200;
              if ((int)local_200 == local_200._4_4_) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_208,(int *)((longlong)&local_200 + 4));
              }
              local_200 = CONCAT44(local_200._4_4_,iVar17 + 1);
              *(undefined4 *)(local_208.Data + (longlong)iVar17 * 4) = *(undefined4 *)pFVar19;
              lVar15 = local_1d0;
            }
          }
LAB_147a7d994:
          local_1d0 = lVar15;
          uVar20 = uVar20 + 1;
          local_1e0 = local_1e0 + 1;
          local_1a0 = local_1a0 + 0x1c;
          local_1ec = local_1ec + 1;
          lVar15 = (longlong)(int)local_1d8;
          param_1 = local_res10;
        } while (local_1e0 < lVar15);
      }
      iVar17 = local_1e8;
      if ((int)local_1d8 < (this->Keys).ArrayNum) {
        lVar26 = lVar15 * 4;
        lVar15 = lVar15 * 0x1c;
        uVar22 = local_1d8;
        do {
          uVar23 = 0;
          if ((int)uVar22 < (this->Keys).ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if (uVar23 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pFVar19 = (this->Keys).AllocatorInstance.Data + lVar15;
          if ((local_218.Data <= pFVar19) &&
             (pFVar19 < local_218.Data + (longlong)iStack_20c * 0x1c)) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (local_210 == iStack_20c) {
            local_210 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x41c,&local_218,&iStack_20c);
          }
          lVar16 = (longlong)local_210 * 0x1c;
          local_210 = local_210 + 1;
          uVar9 = *(undefined8 *)(pFVar19 + 8);
          *(undefined8 *)(local_218.Data + lVar16) = *(undefined8 *)pFVar19;
          *(undefined8 *)(local_218.Data + lVar16 + 8) = uVar9;
          *(undefined8 *)(local_218.Data + lVar16 + 0x10) = *(undefined8 *)(pFVar19 + 0x10);
          *(undefined4 *)(local_218.Data + lVar16 + 0x18) = *(undefined4 *)(pFVar19 + 0x18);
          if (iVar17 != 0) {
            uVar23 = 0;
            if ((int)uVar22 < local_1c0[0]) {
              uVar23 = ~uVar22 >> 0x1f;
            }
            if (uVar23 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pFVar19 = local_1c8.Data + lVar26;
            if ((local_208.Data <= pFVar19) &&
               (pFVar19 < local_208.Data + (longlong)local_200._4_4_ * 4)) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar14 = (int)local_200;
            if ((int)local_200 == local_200._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_208,(int *)((longlong)&local_200 + 4));
            }
            local_200 = CONCAT44(local_200._4_4_,iVar14 + 1);
            *(undefined4 *)(local_208.Data + (longlong)iVar14 * 4) = *(undefined4 *)pFVar19;
          }
          uVar22 = uVar22 + 1;
          lVar15 = lVar15 + 0x1c;
          lVar26 = lVar26 + 4;
        } while ((int)uVar22 < (this->Keys).ArrayNum);
      }
      pTVar3 = &this->Keys;
      if (pTVar3 != (TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *)&local_218) {
        pFVar19 = (pTVar3->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar3->AllocatorInstance).Data = local_218.Data;
        (this->Keys).ArrayNum = local_210;
        (this->Keys).ArrayMax = iStack_20c;
        local_210 = 0;
        iStack_20c = 0;
        local_218.Data = (FScriptContainerElement *)0x0;
      }
      if (local_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data);
      }
      AutoSetTangents(this,0.0);
      if (iVar17 != 0) {
        if ((this->Keys).ArrayNum != (int)local_200) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Keys.Num() == KeepHandles.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\RichCurve.cpp"
                              ,0x447,L"");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar17 = (int)local_200;
        local_118 = local_208.Data;
        if ((int)local_200 < 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iStack_110 = iVar17;
        local_108[0]._12_4_ = uStack_10c;
        local_108[0].ArrayNum = iVar17;
        local_108[0].DataPtr = (FKeyHandle *)local_118;
        FKeyHandleMap::Initialize((FKeyHandleMap *)&this->_padding_,local_108);
      }
      if (local_208.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data);
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
    }
  }
  return;
}

// ReserveKeys @ 147a83020

void __thiscall FRichCurve::ReserveKeys(FRichCurve *this,int param_1)

{
  if (-1 < param_1) {
    if ((this->Keys).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,param_1,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,
                 &(this->Keys).ArrayMax);
    }
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
               *)&this->_padding_,param_1);
    if (*(int *)((longlong)&this->_padding_ + 4) < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 147a833e0

void __thiscall FRichCurve::Reset(FRichCurve *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *this_00;
  
  piVar1 = &(this->Keys).ArrayMax;
  (this->Keys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&(this->Keys).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  return;
}

// SetKeyInterpMode @ 147a8f3c0

void __thiscall
FRichCurve::SetKeyInterpMode
          (FRichCurve *this,FKeyHandle param_1,ERichCurveInterpMode param_2,bool param_3)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar1) {
    pFVar2 = GetKey(this,param_1);
    (pFVar2->InterpMode).Value = (uchar)param_2;
    if (param_3) {
      AutoSetTangents(this,0.0);
    }
  }
  return;
}

// SetKeyInterpMode @ 147a8f430

void __thiscall
FRichCurve::SetKeyInterpMode(FRichCurve *this,FKeyHandle param_1,ERichCurveInterpMode param_2)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar1) {
    pFVar2 = GetKey(this,param_1);
    (pFVar2->InterpMode).Value = (uchar)param_2;
    AutoSetTangents(this,0.0);
  }
  return;
}

// SetKeyTangentMode @ 147a8f480

void __thiscall
FRichCurve::SetKeyTangentMode
          (FRichCurve *this,FKeyHandle param_1,ERichCurveTangentMode param_2,bool param_3)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar1) {
    pFVar2 = GetKey(this,param_1);
    (pFVar2->TangentMode).Value = (uchar)param_2;
    if (param_3) {
      AutoSetTangents(this,0.0);
    }
  }
  return;
}

// SetKeyTangentWeightMode @ 147a8f4f0

void __thiscall
FRichCurve::SetKeyTangentWeightMode
          (FRichCurve *this,FKeyHandle param_1,ERichCurveTangentWeightMode param_2,bool param_3)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar1) {
    pFVar2 = GetKey(this,param_1);
    (pFVar2->TangentWeightMode).Value = (uchar)param_2;
    if (param_3) {
      AutoSetTangents(this,0.0);
    }
  }
  return;
}

// SetKeyTime @ 147a8f560

void __thiscall FRichCurve::SetKeyTime(FRichCurve *this,FKeyHandle param_1,float param_2)

{
  float fVar1;
  TEnumAsByte<ERichCurveInterpMode> TVar2;
  TEnumAsByte<ERichCurveTangentMode> TVar3;
  TEnumAsByte<ERichCurveTangentWeightMode> TVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  FRichCurveKey *pFVar12;
  undefined1 in_R9B;
  float in_XMM1_Da;
  uint in_stack_ffffffffffffffb8;
  
  bVar11 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar11) {
    pFVar12 = GetKey(this,param_1);
    TVar2.Value = (pFVar12->InterpMode).Value;
    TVar3.Value = (pFVar12->TangentMode).Value;
    TVar4.Value = (pFVar12->TangentWeightMode).Value;
    uVar5 = pFVar12->field_0x3;
    fVar6 = pFVar12->Time;
    fVar7 = pFVar12->Value;
    fVar8 = pFVar12->ArriveTangent;
    fVar1 = pFVar12->LeaveTangentWeight;
    fVar9 = pFVar12->ArriveTangentWeight;
    fVar10 = pFVar12->LeaveTangent;
    DeleteKey(this,param_1);
    AddKey(this,in_XMM1_Da,param_2,(bool)in_R9B,(FKeyHandle)(in_stack_ffffffffffffffb8 & 0xffffff00)
          );
    pFVar12 = GetKey(this,param_1);
    pFVar12->InterpMode = (TEnumAsByte<ERichCurveInterpMode>)TVar2.Value;
    pFVar12->TangentMode = (TEnumAsByte<ERichCurveTangentMode>)TVar3.Value;
    pFVar12->TangentWeightMode = (TEnumAsByte<ERichCurveTangentWeightMode>)TVar4.Value;
    pFVar12->field_0x3 = uVar5;
    pFVar12->Time = fVar6;
    pFVar12->Value = fVar7;
    pFVar12->ArriveTangent = fVar8;
    pFVar12->ArriveTangentWeight = fVar9;
    pFVar12->LeaveTangent = fVar10;
    pFVar12->LeaveTangentWeight = fVar1;
    pFVar12->Time = param_2;
  }
  return;
}

// SetKeyValue @ 147a8f6f0

void __thiscall
FRichCurve::SetKeyValue(FRichCurve *this,FKeyHandle param_1,float param_2,bool param_3)

{
  bool bVar1;
  FRichCurveKey *pFVar2;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar1) {
    pFVar2 = GetKey(this,param_1);
    pFVar2->Value = param_2;
    if (param_3) {
      AutoSetTangents(this,0.0);
    }
  }
  return;
}

// SetKeys @ 147a8f820

void __thiscall
FRichCurve::SetKeys(FRichCurve *this,TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *this_00;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  atomic<unsigned_int> aVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int *piVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int local_res10 [4];
  int local_78 [2];
  int *local_70;
  int *local_68;
  
  pTVar1 = &this->Keys;
  piVar2 = &(this->Keys).ArrayMax;
  (this->Keys).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  this_00 = &this->_padding_;
  bVar10 = 1 < (int)this->_padding_;
  if (!bVar10) {
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,piVar3);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar12 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar12 < 0) || (0x80 < iVar12)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar10) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar3);
  }
  iVar12 = (this->Keys).ArrayNum;
  uVar13 = param_1->ArrayNum;
  if (iVar12 < (int)uVar13) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1c,4,uVar13 - iVar12,&pTVar1->AllocatorInstance,&(this->Keys).ArrayNum,
                        piVar2);
    DefaultConstructItems<FRichCurveKey,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x1c,uVar13 - iVar12);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar12) {
      uVar17 = iVar12 - uVar13;
      if (((int)(uVar17 | uVar13) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar17 != 0) {
        pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x1c;
        iVar12 = ((this->Keys).ArrayNum - uVar13) - uVar17;
        if (iVar12 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar17 * 0x1c,(longlong)iVar12 * 0x1c);
        }
        piVar15 = &(this->Keys).ArrayNum;
        *piVar15 = *piVar15 - uVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,&pTVar1->AllocatorInstance,*piVar15,piVar2);
      }
    }
  }
  uVar16 = 0;
  uVar13 = param_1->ArrayNum;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar3 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,piVar3);
  }
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Reserve((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
           *)this_00,uVar13);
  local_res10[0] = 0;
  if (0 < (int)uVar13) {
    do {
      LOCK();
      aVar7 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
      UNLOCK();
      local_78[0] = (int)LastKeyHandleIndex + 1;
      LastKeyHandleIndex = aVar7;
      if ((local_78[0] == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                              ,0x1c,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((int *)this->_padding_ <= local_78) && (local_78 < (int *)this->_padding_ + *piVar3)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (int)this->_padding_;
      if (iVar12 == *piVar3) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)&this->_padding_,piVar3);
      }
      *(int *)&this->_padding_ = iVar12 + 1;
      *(int *)(this->_padding_ + (longlong)iVar12 * 4) = local_78[0];
      local_70 = local_78;
      local_68 = local_res10;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                  *)this_00,(TPairInitializer<FKeyHandle_const_&,int_const_&> *)(local_res10 + 2),
                 (bool *)&local_70);
      local_res10[0] = local_res10[0] + 1;
    } while (local_res10[0] < (int)uVar13);
  }
  iVar12 = param_1->ArrayNum;
  uVar18 = uVar16;
  if (0 < iVar12) {
    do {
      uVar17 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar17 < iVar12) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (param_1->AllocatorInstance).Data;
      uVar8 = *(undefined8 *)(pFVar14 + uVar18);
      uVar9 = *(undefined8 *)(pFVar14 + uVar18 + 8);
      uVar5 = *(undefined4 *)(pFVar14 + uVar18 + 0x18);
      uVar4 = *(undefined8 *)(pFVar14 + uVar18 + 0x10);
      uVar13 = 0;
      if ((int)uVar17 < (this->Keys).ArrayNum) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (pTVar1->AllocatorInstance).Data;
      uVar16 = (ulonglong)(uVar17 + 1);
      *(undefined8 *)(pFVar14 + uVar18) = uVar8;
      *(undefined8 *)(pFVar14 + uVar18 + 8) = uVar9;
      *(undefined8 *)(pFVar14 + uVar18 + 0x10) = uVar4;
      *(undefined4 *)(pFVar14 + uVar18 + 0x18) = uVar5;
      iVar12 = param_1->ArrayNum;
      uVar18 = uVar18 + 0x1c;
    } while ((int)(uVar17 + 1) < iVar12);
  }
  AutoSetTangents(this,0.0);
  return;
}

// UpdateOrAddKey @ 147a9c6a0

FKeyHandle __thiscall
FRichCurve::UpdateOrAddKey(FRichCurve *this,float param_1,float param_2,bool param_3,float param_4)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint in_EDX;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined4 in_XMM3_Da;
  float in_stack_00000030;
  longlong in_stack_ffffffffffffff98;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pwVar8 = (wchar_t *)(ulonglong)param_3;
  uVar6 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
        in_stack_ffffffffffffff98 = (longlong)(int)uVar6;
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
      param_3 = SUB81(pwVar8,0);
      param_1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar7 + 4);
      if ((float)((uint)(param_1 - param_2) & uVar5) <= in_stack_00000030) {
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
        *(undefined4 *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x1c + 8) =
             in_XMM3_Da;
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
        return (FKeyHandle)in_EDX;
      }
      if (param_2 < param_1) break;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x1c;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  LOCK();
  aVar2 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  UNLOCK();
  bVar3 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
  LastKeyHandleIndex = aVar2;
  if (bVar3) {
    param_3 = true;
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
  AddKey(this,param_1,param_2,param_3,
         (FKeyHandle)(uint)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),param_4._0_1_)
        );
  return (FKeyHandle)in_EDX;
}

