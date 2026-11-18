// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 2

// CalculateDataFor @ 14e66deb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Interchange::FAnimationPayloadData::CalculateDataFor
          (FAnimationPayloadData *this,EInterchangeAnimationPayLoadType *param_1,
          TTransform<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FRichCurve *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FKeyHandle FVar9;
  FKeyHandle FVar10;
  ulonglong uVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar13;
  TRotator<double> *this_00;
  TQuat<double> *pTVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int *piVar19;
  FScriptContainerElement *pFVar20;
  FRichCurve *pFVar21;
  FScriptContainerElement *pFVar22;
  FRichCurve *pFVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276 [6];
  ForAnyElementType local_270;
  int local_268 [3];
  uint local_25c;
  FRichCurve *local_258;
  EInterchangeAnimationPayLoadType *local_250;
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  int *local_238;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TQuat<double> local_1c8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  TRotator<double> local_188;
  TQuat<double> local_168;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  uint *puVar12;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((this->PayloadKey).Type == CURVE) {
    local_258 = (FRichCurve *)param_2;
    local_250 = param_1;
    if (*param_1 == STEPCURVE) {
      uVar17 = (this->Curves).ArrayNum;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      piVar19 = &(this->StepCurves).ArrayMax;
      local_238 = piVar19;
      if (*piVar19 < (int)uVar17) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,uVar17,&(this->StepCurves).AllocatorInstance,(this->StepCurves).ArrayNum,
                   piVar19);
      }
      local_25c = (this->Curves).ArrayNum;
      uVar11 = (ulonglong)(int)local_25c;
      pFVar23 = (FRichCurve *)(this->Curves).AllocatorInstance.Data;
      local_258 = pFVar23 + uVar11;
      while( true ) {
        pFVar21 = local_258;
        uVar18 = 0;
        if ((this->Curves).ArrayNum != (int)uVar11) {
          local_278 = 0;
          `TCheckedPointerIterator<FRichCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_278);
        }
        if (pFVar23 == pFVar21) break;
        iVar7 = (this->StepCurves).ArrayNum;
        if (iVar7 == (this->StepCurves).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x860,&(this->StepCurves).AllocatorInstance,piVar19);
        }
        (this->StepCurves).ArrayNum = iVar7 + 1;
        pFVar20 = (this->StepCurves).AllocatorInstance.Data + (longlong)iVar7 * 0x60;
        DefaultConstructItems<FInterchangeStepCurve,int>(pFVar20,1);
        iVar7 = (pFVar23->Keys).ArrayNum;
        iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 8),
                           (int *)(pFVar20 + 0xc));
        memset((void *)(*(longlong *)&pFVar20->field_0x0 + (longlong)iVar8 * 4),0,
               (longlong)iVar7 << 2);
        local_270.Data = (FScriptContainerElement *)0x0;
        local_268[0] = 0;
        local_268[1] = 0;
        iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&local_270,local_268,local_268 + 1);
        memset(local_270.Data + (longlong)iVar8 * 4,0,(longlong)iVar7 << 2);
        iVar7 = (**(code **)(pFVar23->_padding_ + 8))(pFVar23);
        if (iVar7 < 1) {
          FVar9 = FKeyHandle::Invalid();
          puVar12 = (uint *)CONCAT44(extraout_var_00,FVar9.Index);
        }
        else {
          FVar9 = FIndexedCurve::GetKeyHandle((FIndexedCurve *)pFVar23,(int)local_248);
          puVar12 = (uint *)CONCAT44(extraout_var,FVar9.Index);
        }
        FVar9.Index = *puVar12;
        FVar10 = FKeyHandle::Invalid();
        uVar11 = uVar18;
        if (FVar9.Index != *(uint *)CONCAT44(extraout_var_01,FVar10.Index)) {
          do {
            fVar24 = FRichCurve::GetKeyTime(pFVar23,FVar9);
            uVar16 = (uint)uVar18;
            uVar17 = 0;
            if ((int)uVar16 < *(int *)&pFVar20[8].field_0x0) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(float *)(*(longlong *)&pFVar20->field_0x0 + uVar11) = fVar24;
            fVar24 = FRichCurve::GetKeyValue(pFVar23,FVar9);
            uVar17 = 0;
            if ((int)uVar16 < local_268[0]) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(float *)(local_270.Data + uVar11) = fVar24;
            FVar9 = FIndexedCurve::GetNextKey((FIndexedCurve *)pFVar23,(uint)local_240);
            uVar18 = (ulonglong)(uVar16 + 1);
            FVar9.Index = *(uint *)CONCAT44(extraout_var_02,FVar9.Index);
            FVar10 = FKeyHandle::Invalid();
            piVar19 = local_238;
            uVar11 = uVar11 + 4;
          } while (FVar9.Index != *(uint *)CONCAT44(extraout_var_03,FVar10.Index));
        }
        pFVar22 = pFVar20 + 0x10;
        if ((FScriptContainerElement *)&local_270 != pFVar22) {
          if (*(void **)&pFVar22->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar22->field_0x0);
          }
          *(undefined8 *)&pFVar22->field_0x0 = 0;
          *(FScriptContainerElement **)&pFVar22->field_0x0 = local_270.Data;
          local_270.Data = (FScriptContainerElement *)0x0;
          *(int *)&pFVar20[0x18].field_0x0 = local_268[0];
          *(int *)(pFVar20 + 0x1c) = local_268[1];
          local_268[0] = 0;
          local_268[1] = 0;
          if ((*(int *)(pFVar20 + 0x1c) == -1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (local_270.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data);
        }
        uVar11 = (ulonglong)local_25c;
        pFVar23 = pFVar23 + 1;
      }
    }
    else {
      if (*param_1 != BAKED) {
        return;
      }
      if ((this->Curves).ArrayNum != 9) {
        return;
      }
      this->RangeEndTime = -3.4028234663852886e+38;
      pFVar21 = (FRichCurve *)(this->Curves).AllocatorInstance.Data;
      pFVar23 = pFVar21 + 9;
      while( true ) {
        if ((this->Curves).ArrayNum != 9) {
          local_277 = 0;
          `TCheckedPointerIterator<FRichCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_277);
        }
        pFVar5 = local_258;
        if (pFVar21 == pFVar23) break;
        pTVar13 = FRichCurve::GetConstRefOfKeys(pFVar21);
        iVar7 = pTVar13->ArrayNum;
        pFVar20 = (pTVar13->AllocatorInstance).Data;
        pFVar22 = pFVar20 + (longlong)iVar7 * 0x1c;
        while( true ) {
          if (pTVar13->ArrayNum != iVar7) {
            local_276[0] = 0;
            `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_276);
          }
          if (pFVar20 == pFVar22) break;
          dVar2 = (double)*(float *)(pFVar20 + 4);
          if (this->RangeEndTime <= dVar2 && dVar2 != this->RangeEndTime) {
            this->RangeEndTime = dVar2;
          }
          pFVar20 = pFVar20 + 0x1c;
        }
        pFVar21 = pFVar21 + 1;
      }
      dVar2 = this->RangeEndTime;
      uVar27 = SUB84(dVar2,0);
      uVar28 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 < 0.0) {
        this->RangeEndTime = 0.0;
        uVar27 = 0;
        uVar28 = 0;
      }
      dVar2 = this->BakeFrequency;
      uVar25 = SUB84(dVar2,0);
      uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 == 0.0) {
        uVar25 = (undefined4)__real_403e000000000000;
        uVar26 = (undefined4)((ulonglong)__real_403e000000000000 >> 0x20);
      }
      dVar3 = (double)CONCAT44(uVar28,uVar27) - this->RangeStartTime;
      dVar4 = __real_3ff0000000000000 / (double)CONCAT44(uVar26,uVar25);
      if (dVar3 <= dVar4) {
        dVar3 = dVar4;
      }
      if (dVar3 <= __real_3fa1111120000000) {
        dVar3 = __real_3fa1111120000000;
      }
      local_230 = (((VectorRegister4Double *)&local_258->_padding_)->XY).m128d_f64[0];
      dStack_228 = (((VectorRegister4Double *)&local_258->_padding_)->XY).m128d_f64[1];
      local_1c8.Z = (((VectorRegister4Double *)&local_258->_padding_)->ZW).m128d_f64[0];
      local_1c8.W = (((VectorRegister4Double *)&local_258->_padding_)->ZW).m128d_f64[1];
      local_220 = (((VectorRegister4Double *)&local_258->_padding_)->ZW).m128d_f64[0];
      local_1c8.X = (((VectorRegister4Double *)&local_258->_padding_)->XY).m128d_f64[0];
      local_1c8.Y = (((VectorRegister4Double *)&local_258->_padding_)->XY).m128d_f64[1];
      uVar17 = ((int)ROUND(dVar3 * (dVar2 + dVar2) + __real_3fe0000000000000) >> 1) + 1;
      UE::Math::TQuat<double>::Euler(&local_1c8,(TVector<double> *)&local_200._s_0);
      local_218 = (((VectorRegister4Double *)&pFVar5->_padding_)->XY).m128d_f64[0];
      dStack_210 = (((VectorRegister4Double *)&pFVar5->_padding_)->XY).m128d_f64[1];
      dVar2 = 0.0;
      local_208 = (((VectorRegister4Double *)&pFVar5->_padding_)->ZW).m128d_f64[0];
      if (0 < (int)uVar17) {
        uVar11 = (ulonglong)uVar17;
        do {
          fVar24 = (float)local_230;
          if (((this->Curves).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0x78) != 0) {
            if (((this->Curves).ArrayNum < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar24 = FRichCurve::Eval((FRichCurve *)(this->Curves).AllocatorInstance.Data,
                                      (float)dVar2,0.0);
          }
          fVar29 = (float)dStack_228;
          if (((this->Curves).ArrayNum < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0xf8) != 0) {
            if (((this->Curves).ArrayNum < 2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar29 = FRichCurve::Eval((FRichCurve *)((this->Curves).AllocatorInstance.Data + 0x80),
                                      (float)dVar2,0.0);
          }
          fVar30 = (float)local_220;
          if (((this->Curves).ArrayNum < 3) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0x178) != 0) {
            if (((this->Curves).ArrayNum < 3) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar30 = FRichCurve::Eval((FRichCurve *)((this->Curves).AllocatorInstance.Data + 0x100),
                                      (float)dVar2,0.0);
          }
          dVar3 = (double)fVar30;
          fVar30 = (float)local_200._s_0.X;
          if (((this->Curves).ArrayNum < 4) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0x1f8) != 0) {
            if (((this->Curves).ArrayNum < 4) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar30 = FRichCurve::Eval((FRichCurve *)((this->Curves).AllocatorInstance.Data + 0x180),
                                      (float)dVar2,0.0);
          }
          local_1e8._s_0.X = (double)fVar30;
          fVar30 = (float)local_200._s_0.Y;
          if (((this->Curves).ArrayNum < 5) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0x278) != 0) {
            if (((this->Curves).ArrayNum < 5) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar30 = FRichCurve::Eval((FRichCurve *)((this->Curves).AllocatorInstance.Data + 0x200),
                                      (float)dVar2,0.0);
          }
          local_1e8._s_0.Y = (double)fVar30;
          fVar30 = (float)local_200._s_0.Z;
          if (((this->Curves).ArrayNum < 6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0x2f8) != 0) {
            if (((this->Curves).ArrayNum < 6) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar30 = FRichCurve::Eval((FRichCurve *)((this->Curves).AllocatorInstance.Data + 0x280),
                                      (float)dVar2,0.0);
          }
          local_1e8._s_0.Z = (double)fVar30;
          fVar30 = (float)local_218;
          if (((this->Curves).ArrayNum < 7) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0x378) != 0) {
            if (((this->Curves).ArrayNum < 7) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar30 = FRichCurve::Eval((FRichCurve *)((this->Curves).AllocatorInstance.Data + 0x300),
                                      (float)dVar2,0.0);
          }
          fVar31 = (float)dStack_210;
          if (((this->Curves).ArrayNum < 8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0x3f8) != 0) {
            if (((this->Curves).ArrayNum < 8) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar31 = FRichCurve::Eval((FRichCurve *)((this->Curves).AllocatorInstance.Data + 0x380),
                                      (float)dVar2,0.0);
          }
          fVar32 = (float)local_208;
          if (((this->Curves).ArrayNum < 9) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->Curves).AllocatorInstance.Data + 0x478) != 0) {
            if (((this->Curves).ArrayNum < 9) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            fVar32 = FRichCurve::Eval((FRichCurve *)((this->Curves).AllocatorInstance.Data + 0x400),
                                      (float)dVar2,0.0);
          }
          this_00 = UE::Math::TRotator<double>::MakeFromEuler
                              (&local_188,(TVector<double> *)&local_1e8._s_0);
          pTVar14 = UE::Math::TRotator<double>::Quaternion(this_00,&local_168);
          pFVar20 = (this->Transforms).AllocatorInstance.Data;
          local_1a8 = pTVar14->X;
          dStack_1a0 = pTVar14->Y;
          local_198 = pTVar14->Z;
          dStack_190 = pTVar14->W;
          dStack_110 = 0.0;
          local_128._8_4_ = SUB84((double)fVar29,0);
          local_128._0_8_ = (double)fVar24;
          local_128._12_4_ = (int)((ulonglong)(double)fVar29 >> 0x20);
          local_108._8_4_ = SUB84((double)fVar31,0);
          local_108._0_8_ = (double)fVar30;
          local_108._12_4_ = (int)((ulonglong)(double)fVar31 >> 0x20);
          local_f8 = (double)fVar32;
          dStack_f0 = 0.0;
          local_148 = local_1a8;
          dStack_140 = dStack_1a0;
          local_138 = local_198;
          dStack_130 = dStack_190;
          local_118 = dVar3;
          if (((pFVar20 <= (FScriptContainerElement *)&local_148) &&
              ((FScriptContainerElement *)&local_148 <
               pFVar20 + (longlong)(this->Transforms).ArrayMax * 0x60)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar7 = (this->Transforms).ArrayNum;
          if (iVar7 == (this->Transforms).ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&(this->Transforms).AllocatorInstance,
                               &(this->Transforms).ArrayMax);
          }
          (this->Transforms).ArrayNum = iVar7 + 1;
          dVar2 = dVar2 + dVar4;
          pFVar20 = (this->Transforms).AllocatorInstance.Data;
          lVar15 = (longlong)iVar7 * 0x60;
          *(double *)(pFVar20 + lVar15) = local_148;
          *(double *)(pFVar20 + lVar15 + 8) = dStack_140;
          *(double *)(pFVar20 + lVar15 + 0x10) = local_138;
          *(double *)(pFVar20 + lVar15 + 0x10 + 8) = dStack_130;
          *(undefined8 *)(pFVar20 + lVar15 + 0x20) = local_128._0_8_;
          *(undefined8 *)(pFVar20 + lVar15 + 0x20 + 8) = local_128._8_8_;
          *(double *)(pFVar20 + lVar15 + 0x30) = local_118;
          *(double *)(pFVar20 + lVar15 + 0x30 + 8) = dStack_110;
          *(undefined8 *)(pFVar20 + lVar15 + 0x40) = local_108._0_8_;
          *(undefined8 *)(pFVar20 + lVar15 + 0x40 + 8) = local_108._8_8_;
          *(double *)(pFVar20 + lVar15 + 0x50) = local_f8;
          *(double *)(pFVar20 + lVar15 + 0x50 + 8) = dStack_f0;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    this->AdditionalSupportedType = *local_250;
  }
  return;
}

// SerializeBaked @ 14e6708f0

void __thiscall
UE::Interchange::FAnimationPayloadData::SerializeBaked
          (FAnimationPayloadData *this,FArchive *param_1)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = &this->BakeFrequency;
  pdVar2 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar1 = &this->RangeStartTime;
  pdVar2 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar1 = &this->RangeEndTime;
  pdVar2 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Transforms);
  return;
}

