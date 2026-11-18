// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14758b440

UScriptStruct * __cdecl FTimeStretchCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTimeStretchCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTimeStretchCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTimeStretchCurve,(UObject *)pUVar1,
                         L"TimeStretchCurve");
  }
  return Z_Registration_Info_UScriptStruct_FTimeStretchCurve.OuterSingleton;
}

// BakeFromFloatCurve @ 1475b4c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTimeStretchCurve::BakeFromFloatCurve(FTimeStretchCurve *this,FFloatCurve *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [8];
  float local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  ulonglong local_c0;
  
  fVar4 = __real_3f800000;
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_128;
  piVar1 = &(this->Markers).ArrayNum;
  fVar20 = this->SamplingRate;
  if (__real_43700000 <= this->SamplingRate) {
    fVar20 = __real_43700000;
  }
  fVar24 = 0.0;
  fVar23 = 0.0;
  if (fVar20 <= __real_3f800000) {
    fVar20 = __real_3f800000;
  }
  iVar7 = (int)ROUND((fVar20 + fVar20) * param_2 - __real_3f000000) >> 1;
  iVar10 = 1;
  if (1 < iVar7) {
    iVar10 = iVar7;
  }
  uVar14 = 0;
  uVar18 = uVar14;
  if (0 < iVar10) {
    do {
      fVar22 = (float)(int)uVar18 * (param_2 / (float)iVar10);
      fVar20 = FFloatCurve::Evaluate(param_1,fVar22);
      pFVar16 = (this->Markers).AllocatorInstance.Data;
      uStack_cc = 0;
      uStack_c8 = 0;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      local_d0 = fVar22;
      fStack_c4 = fVar20;
      if (((pFVar16 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 <
           pFVar16 + (longlong)(this->Markers).ArrayMax * 0x10)) &&
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
      iVar7 = *piVar1;
      if (iVar7 == (this->Markers).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&(this->Markers).AllocatorInstance,&(this->Markers).ArrayMax);
      }
      uVar11 = (int)uVar18 + 1;
      *piVar1 = iVar7 + 1;
      if (fVar20 <= fVar23) {
        fVar20 = fVar23;
      }
      pFVar16 = (this->Markers).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      *(ulonglong *)pFVar16 = CONCAT44(uStack_cc,local_d0);
      *(ulonglong *)(pFVar16 + 8) = CONCAT44(fStack_c4,uStack_c8);
      uVar18 = (ulonglong)uVar11;
      fVar23 = fVar20;
    } while ((int)uVar11 < iVar10);
    piVar1 = &(this->Markers).ArrayNum;
    if (__real_38d1b717 <= fVar20) {
      iVar10 = *piVar1;
      pFVar16 = (this->Markers).AllocatorInstance.Data;
      pFVar13 = pFVar16 + (longlong)iVar10 * 0x10;
      while( true ) {
        if (*piVar1 != iVar10) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<FTimeStretchCurveMarker,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_d8);
        }
        uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        if (pFVar16 == pFVar13) break;
        *(float *)(pFVar16 + 0xc) = *(float *)(pFVar16 + 0xc) / fVar20;
        pFVar16 = pFVar16 + 0x10;
      }
      uVar8 = (this->Markers).ArrayNum - 2;
      if (0 < (int)uVar8) {
        uVar17 = (ulonglong)uVar8;
        uVar18 = uVar14;
        do {
          uVar15 = (uint)uVar14;
          uVar8 = 0;
          if ((int)uVar15 < (this->Markers).ArrayNum) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          uVar15 = uVar15 + 1;
          pFVar16 = (this->Markers).AllocatorInstance.Data;
          uVar12 = ~uVar15 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar15 < (this->Markers).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
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
          fVar20 = (float)((uint)(*(float *)(pFVar16 + uVar18 + 0xc) -
                                 *(float *)((this->Markers).AllocatorInstance.Data + uVar18 + 0x1c))
                          & uVar11);
          if (this->CurveValueMinPrecision <= fVar20 && fVar20 != this->CurveValueMinPrecision) {
            uVar14 = (ulonglong)uVar15;
            uVar18 = uVar18 + 0x10;
          }
          else {
            uVar8 = 0;
            if ((int)uVar15 < (this->Markers).ArrayNum) {
              uVar8 = uVar12;
            }
            if ((uVar8 == 0) &&
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
            pFVar16 = (this->Markers).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
            iVar10 = (this->Markers).ArrayNum + ~uVar15;
            if (iVar10 != 0) {
              memmove(pFVar16,pFVar16 + 0x10,(longlong)iVar10 << 4);
            }
            piVar1 = &(this->Markers).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      lVar19 = 0;
      iVar10 = (this->Markers).ArrayNum;
      piVar1 = &(this->Markers).ArrayMax;
      if ((this->Markers).ArrayMax != iVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar10,&(this->Markers).AllocatorInstance,iVar10,piVar1);
      }
      uVar8 = 0;
      if ((this->Markers).ArrayNum < 3) {
        iVar10 = *piVar1;
        (this->Markers).ArrayNum = 0;
      }
      else {
        this->Sum_dT_i_by_C_i[0] = 0.0;
        this->Sum_dT_i_by_C_i[1] = 0.0;
        fVar22 = 0.0;
        this->Sum_dT_i_by_C_i[2] = 0.0;
        fVar23 = __real_3f7d70a4;
        fVar20 = __real_42c80000;
        uVar15 = 0;
        uVar12 = (this->Markers).ArrayNum - 1;
        if (0 < (int)uVar12) {
          do {
            uVar9 = uVar8;
            if ((int)uVar15 < (this->Markers).ArrayNum) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
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
            uVar15 = uVar15 + 1;
            pFVar16 = (this->Markers).AllocatorInstance.Data + lVar19;
            fVar21 = *(float *)pFVar16;
            *(float *)(pFVar16 + 4) = fVar24;
            *(float *)(pFVar16 + 8) = fVar22;
            uVar9 = uVar8;
            if ((int)uVar15 < (this->Markers).ArrayNum) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
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
            fVar2 = *(float *)(pFVar16 + 0xc);
            lVar19 = lVar19 + 0x10;
            fVar21 = *(float *)((this->Markers).AllocatorInstance.Data + lVar19) - fVar21;
            this->Sum_dT_i_by_C_i[0] = fVar2 * fVar21 + this->Sum_dT_i_by_C_i[0];
            fVar24 = fVar24 + fVar21 / (fVar2 * fVar20 + fVar4);
            fVar22 = fVar22 + fVar21 / (fVar4 - fVar2 * fVar23);
            this->Sum_dT_i_by_C_i[1] =
                 (fVar24 - *(float *)(pFVar16 + 4)) * fVar2 + this->Sum_dT_i_by_C_i[1];
            this->Sum_dT_i_by_C_i[2] =
                 (fVar22 - *(float *)(pFVar16 + 8)) * fVar2 + this->Sum_dT_i_by_C_i[2];
          } while ((int)uVar15 < (int)uVar12);
        }
        uVar15 = uVar8;
        if ((int)uVar12 < (this->Markers).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar16 = (this->Markers).AllocatorInstance.Data;
        bVar5 = true;
        lVar19 = (longlong)(int)uVar12;
        *(float *)(pFVar16 + lVar19 * 0x10) = param_2;
        *(float *)(pFVar16 + lVar19 * 0x10 + 4) = fVar24;
        *(float *)(pFVar16 + lVar19 * 0x10 + 8) = fVar22;
        iVar10 = (this->Markers).ArrayNum;
        uVar15 = iVar10 - 1;
        if ((int)uVar15 < iVar10) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar16 = (this->Markers).AllocatorInstance.Data;
        lVar19 = (longlong)(this->Markers).ArrayNum;
        if (((float)((uint)*(float *)(pFVar16 + lVar19 * 0x10 + -0xc) & uVar11) <= __real_322bcc77)
           || ((float)((uint)*(float *)(pFVar16 + lVar19 * 0x10 + -8) & uVar11) <= __real_322bcc77))
        {
          bVar5 = false;
        }
        if (((__real_322bcc77 <
              (float)((uint)(*(float *)(pFVar16 + lVar19 * 0x10 + -0x10) -
                            *(float *)(pFVar16 + lVar19 * 0x10 + -0xc)) & uVar11)) &&
            (__real_322bcc77 <
             (float)((uint)(*(float *)(pFVar16 + lVar19 * 0x10 + -0x10) -
                           *(float *)(pFVar16 + lVar19 * 0x10 + -8)) & uVar11))) && (bVar5)) {
          return;
        }
        iVar10 = (this->Markers).ArrayMax;
        (this->Markers).ArrayNum = 0;
      }
      goto joined_r0x0001475b52aa;
    }
  }
  iVar10 = (this->Markers).ArrayMax;
  (this->Markers).ArrayNum = 0;
joined_r0x0001475b52aa:
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Markers).AllocatorInstance,0,&(this->Markers).ArrayMax);
  }
  return;
}

// IsValid @ 1475e2ca0

bool __thiscall FTimeStretchCurve::IsValid(FTimeStretchCurve *this)

{
  return 0 < (this->Markers).ArrayNum;
}

// Reset @ 1475f6bb0

void __thiscall FTimeStretchCurve::Reset(FTimeStretchCurve *this)

{
  (this->Markers).ArrayNum = 0;
  if ((this->Markers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Markers).AllocatorInstance,0,&(this->Markers).ArrayMax);
  }
  return;
}

