// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// CheckInvariants @ 14620acc0

void __thiscall
UE::MovieScene::FMutualInclusivityGraphCommandBuffer::CheckInvariants
          (FMutualInclusivityGraphCommandBuffer *this)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar7 = (this->Commands).ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Commands).AllocatorInstance.Data;
      iVar7 = *(int *)(pFVar2 + lVar8 + 8);
      auVar1 = *(undefined1 (*) [16])(pFVar2 + lVar8);
      uVar6 = auVar1._0_4_;
      if (iVar7 == 1) {
        uVar6 = uVar6 & 0xffff;
        if (((uVar6 == 0) || ((this->Commands).ArrayNum < (int)uVar6)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != 0 && Index <= this->Commands.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneMutualComponentInclusivity.cpp"
                               ,0x83,L"Invalid short circuit index %d for command buffer length"),
           bVar5)) goto code_r0x00014620aeb4;
      }
      else {
        uVar4 = auVar1._2_2_;
        if (iVar7 == 2) {
          if (((uVar4 == 0) || ((this->Commands).ArrayNum < (int)(uint)uVar4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index != 0 && Index <= this->Commands.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneMutualComponentInclusivity.cpp"
                                 ,0x83,L"Invalid short circuit index %d for command buffer length"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar6 = 0;
          if ((int)(uVar4 - 1) < (this->Commands).ArrayNum) {
            uVar6 = ~(uVar4 - 1) >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          if ((*(int *)((this->Commands).AllocatorInstance.Data +
                       (longlong)(int)(uint)uVar4 * 0x10 + -8) != 4) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Commands[Command.Match.ShortCircuitIndex-1].CommandType == ECommandType::ShortCircuit"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneMutualComponentInclusivity.cpp"
                                 ,0x9a,
                                 L"Expected short circuit command to proceed match any commands"),
             bVar5)) goto code_r0x00014620aeb4;
        }
        else {
          if (iVar7 == 3) {
            uVar6 = (uint)uVar4;
          }
          else {
            if (iVar7 != 4) goto LAB_14620aeb5;
            uVar6 = uVar6 & 0xffff;
          }
          if (((uVar6 == 0) || ((this->Commands).ArrayNum < (int)uVar6)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index != 0 && Index <= this->Commands.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneMutualComponentInclusivity.cpp"
                                 ,0x83,L"Invalid short circuit index %d for command buffer length"),
             bVar5)) {
code_r0x00014620aeb4:
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
LAB_14620aeb5:
      iVar7 = (this->Commands).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// ComputeMutuallyInclusiveComponents @ 14620ba60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::MovieScene::FMutualInclusivityGraphCommandBuffer::ComputeMutuallyInclusiveComponents
          (FMutualInclusivityGraphCommandBuffer *this,EMutuallyInclusiveComponentType param_1,
          FComponentMask *param_2,FComponentMask *param_3,FMutualComponentInitializers *param_4)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<UE::MovieScene::IMutualComponentInitializer_*> FVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<UE::MovieScene::IMutualComponentInitializer_*> FVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  ushort uVar15;
  FComponentTypeID FVar16;
  undefined1 auStack_f8 [32];
  ulonglong *local_d8;
  ForElementType<UE::MovieScene::IMutualComponentInitializer_*> local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  EMutuallyInclusiveComponentType local_a8;
  ulonglong local_a0;
  undefined1 local_98 [16];
  FComponentMask *local_88;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar14 = 0;
  local_80.NumBits = 0;
  local_80.MaxBits = 0;
  local_a8 = param_1;
  local_88 = param_3;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_80,&param_2->Bits);
  iVar9 = (this->Commands).ArrayNum;
  uVar12 = 0;
  if (0 < iVar9) {
    iVar11 = local_80.NumBits;
    do {
      uVar8 = 0;
      if ((int)uVar12 < iVar9) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_d0 = (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)(longlong)iVar9;
        local_d8 = (ulonglong *)(longlong)(int)uVar12;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          iVar9 = (*pcVar5)();
          return iVar9;
        }
      }
      pFVar3 = (this->Commands).AllocatorInstance.Data;
      local_98 = *(undefined1 (*) [16])(pFVar3 + (longlong)(int)uVar12 * 0x10);
      uVar8 = local_98._0_4_;
      uVar15 = local_98._0_2_;
      FVar16.Value = local_98._2_2_;
      uVar6 = local_98._0_8_;
      switch(*(undefined4 *)(pFVar3 + (longlong)(int)uVar12 * 0x10 + 8)) {
      case 0:
        if (((uVar15 != 0xffff) && ((int)(uVar8 & 0xffff) < iVar11)) &&
           ((*(uint *)local_80.AllocatorInstance.InlineData[(uVar6 & 0xffff) >> 5].Pad >>
             (uVar8 & 0x1f) & 1) != 0)) goto LAB_14620bc41;
        break;
      case 1:
        if ((param_1 & local_98[2]) == 0) {
          uVar12 = (uVar8 & 0xffff) - 1;
        }
        break;
      case 2:
        if (((uVar15 != 0xffff) && ((int)(uVar8 & 0xffff) < iVar11)) &&
           ((*(uint *)local_80.AllocatorInstance.InlineData[(uVar6 & 0xffff) >> 5].Pad >>
             (uVar8 & 0x1f) & 1) != 0)) {
          uVar12 = FVar16.Value - 1;
        }
        break;
      case 3:
        if (((uVar15 == 0xffff) || (iVar11 <= (int)(uVar8 & 0xffff))) ||
           ((*(uint *)local_80.AllocatorInstance.InlineData[(uVar6 & 0xffff) >> 5].Pad >>
             (uVar8 & 0x1f) & 1) == 0)) {
          uVar12 = FVar16.Value - 1;
        }
        break;
      case 4:
        uVar12 = (uVar8 & 0xffff) - 1;
        break;
      case 5:
        FVar16.Value = uVar15;
LAB_14620bc41:
        if (((FVar16.Value == 0xffff) || (iVar11 <= (int)(uint)FVar16.Value)) ||
           ((*(uint *)local_80.AllocatorInstance.InlineData[FVar16.Value >> 5].Pad >>
             (FVar16.Value & 0x1f) & 1) == 0)) {
          iVar14 = iVar14 + 1;
          FComponentMask::Set(local_88,FVar16);
          iVar9 = ((uint)FVar16.Value - iVar11) + 1;
          if (0 < iVar9) {
            TBitArray<TFixedAllocator<12>_>::Add(&local_80,false,iVar9);
            iVar11 = local_80.NumBits;
          }
          if ((iVar11 <= (int)(uint)FVar16.Value) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            iVar9 = (*pcVar5)();
            return iVar9;
          }
          pTVar2 = local_80.AllocatorInstance.InlineData + (FVar16.Value >> 5);
          *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)FVar16.Value & 0x1f);
          iVar11 = local_80.NumBits;
        }
        break;
      case 6:
        FVar4 = (param_4->Initializers).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)param_4;
        if (FVar4 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
          FVar10 = FVar4;
        }
        local_a0 = uVar6;
        if ((ulonglong)FVar10 <= &local_a0) {
          lVar13 = (longlong)(param_4->Initializers).ArrayMax;
          FVar10 = (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)param_4;
          if (FVar4 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
            FVar10 = FVar4;
          }
          if (&local_a0 < (ulonglong *)((longlong)FVar10 + lVar13 * 8)) {
            local_c0 = (longlong)(param_4->Initializers).ArrayNum;
            local_b8 = 8;
            local_d0 = (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)param_4;
            if (FVar4 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
              local_d0 = FVar4;
            }
            local_d8 = &local_a0;
            local_c8 = lVar13;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              iVar9 = (*pcVar5)();
              return iVar9;
            }
          }
        }
        iVar9 = (param_4->Initializers).ArrayNum;
        piVar1 = &(param_4->Initializers).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::IMutualComponentInitializer_*>_>
                            (0x808,(ForElementType<UE::MovieScene::IMutualComponentInitializer_*> *)
                                   param_4,piVar1);
        }
        (param_4->Initializers).ArrayNum = iVar9 + 1;
        FVar4 = (param_4->Initializers).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)param_4;
        if (FVar4 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
          FVar10 = FVar4;
        }
        *(ulonglong *)((longlong)FVar10 + (longlong)iVar9 * 8) = local_a0;
      }
      iVar9 = (this->Commands).ArrayNum;
      uVar12 = uVar12 + 1;
      param_1 = local_a8;
    } while ((int)uVar12 < iVar9);
  }
  return iVar14;
}

