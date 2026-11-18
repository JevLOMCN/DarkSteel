// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FGraphAnalyzer @ 14ad98720

FGraphAnalyzer * __thiscall
Metasound::Frontend::FGraphAnalyzer::FGraphAnalyzer
          (FGraphAnalyzer *this,FOperatorSettings *param_1,ulong64 param_2,
          TMap<FGuid,Metasound::FDataReferenceCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>_>
          *param_3)

{
  TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> *pTVar1;
  IReceiver *pIVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  FDataTransmissionCenter *this_00;
  TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> TVar7;
  FTransmissionAddress local_res8;
  undefined **local_28;
  ulong64 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar3 = param_1->SampleRate;
  fVar4 = param_1->TargetBlockRate;
  fVar5 = param_1->ActualBlockRate;
  iVar6 = param_1->NumFramesPerBlock;
  this->InstanceID = param_2;
  pTVar1 = &this->ActiveAnalyzerReceiver;
  (this->OperatorSettings).SampleRate = iVar3;
  (this->OperatorSettings).TargetBlockRate = fVar4;
  (this->OperatorSettings).ActualBlockRate = fVar5;
  (this->OperatorSettings).NumFramesPerBlock = iVar6;
  (this->Analyzers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Analyzers).ArrayNum = 0;
  (this->Analyzers).ArrayMax = 0;
  pTVar1->Ptr = (IReceiver *)0x0;
  TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
              *)&this->InternalDataReferences,
             (TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
              *)param_3);
  local_28 = &___7FGraphAnalyzerAddress_Frontend_Metasound__6B_;
  local_20 = this->InstanceID;
  this_00 = FDataTransmissionCenter::Get();
  local_18._0_4_ = param_1->SampleRate;
  local_18._4_4_ = param_1->TargetBlockRate;
  uStack_10._0_4_ = param_1->ActualBlockRate;
  uStack_10._4_4_ = param_1->NumFramesPerBlock;
  TVar7 = FDataTransmissionCenter::RegisterNewReceiver
                    (this_00,&local_res8,(FReceiverInitParams *)&local_28);
  if ((IReceiver *)pTVar1 != TVar7.Ptr) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (IReceiver *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pIVar2 != (IReceiver *)0x0) {
      (**(code **)pIVar2->_padding_)(pIVar2,1);
    }
  }
  if (local_res8 != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  return this;
}

// Execute @ 14adb7180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Metasound::Frontend::FGraphAnalyzer::Execute(FGraphAnalyzer *this)

{
  IReceiver *this_00;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *this_01;
  ulonglong uVar7;
  FAnalyzerAddress *pFVar8;
  ulong64 uVar9;
  FAnyDataReference *pFVar10;
  byte bVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  FDataReferenceCollection *this_02;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ForElementType<unsigned_int> FVar25;
  undefined8 uVar26;
  longlong lVar27;
  FGraphAnalyzer *pFVar28;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  undefined8 local_1b0;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_1a8;
  uint local_198;
  uint uStack_194;
  FName FStack_190;
  undefined4 local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined4 local_178;
  int local_174;
  undefined1 local_170 [24];
  undefined8 local_158;
  FName local_150;
  FNameEntryId local_148;
  uint uStack_144;
  FName FStack_140;
  FGuid local_138;
  FName local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  FName local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  longlong local_c8;
  FGraphAnalyzer *local_c0;
  FAnyDataReference *local_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar13 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  this_00 = (this->ActiveAnalyzerReceiver).Ptr;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar28 = this;
  local_170._16_8_ = this;
  if (this_00 == (IReceiver *)0x0) goto LAB_14adb7b6e;
  this_01 = IDataTransmissionBase::
            GetAs<Metasound::TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                      ((IDataTransmissionBase *)this_00);
  bVar6 = TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
          CanPop(this_01);
  if (!bVar6) goto LAB_14adb7b6e;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  if ((this_01->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(*(longlong *)this_01->_padding_ + 0x20))((longlong *)this_01->_padding_,this_01);
  if (((this_01->Payload).Ptr ==
       (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payload.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0x225,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = (this_01->Payload).Ptr;
  if (&local_1a8 != pTVar1) {
    iVar18 = pTVar1->ArrayNum;
    pFVar8 = (FAnalyzerAddress *)(pTVar1->AllocatorInstance).Data;
    local_1a8.ArrayNum = iVar18;
    if ((iVar18 != 0) || (local_1a8.ArrayMax != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar18,local_1a8.ArrayMax,&local_1a8.AllocatorInstance,iVar18,
                 &local_1a8.ArrayMax);
      ConstructItems<Metasound::Frontend::FAnalyzerAddress,Metasound::Frontend::FAnalyzerAddress,int>
                (local_1a8.AllocatorInstance.Data,pFVar8,iVar18);
    }
  }
  FVar22.Data = local_1a8.AllocatorInstance.Data;
  iVar18 = local_1a8.ArrayNum;
  lVar27 = (longlong)local_1a8.ArrayNum;
  if ((local_1a8.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar26._0_4_ = 1;
  uVar26._4_4_ = 0;
  local_158._0_4_ = 1;
  local_158._4_4_ = 0;
  uVar16 = iVar18 + (local_88._8_4_ - local_54);
  uVar17 = 1;
  if ((uint)(local_88._8_4_ - local_54) < uVar16) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
    }
    TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_88,uVar16);
    if (3 < uVar16) {
      uVar23 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_178 = (undefined4)lVar3;
      uVar17 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((local_40 == 0) || ((int)local_40 < (int)uVar17)) {
      local_40 = uVar17;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
      }
      if (uVar17 != 0) {
        uVar16 = uVar17;
        if (uVar17 < 2) {
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            uVar16 = 0;
            goto LAB_14adb73e5;
          }
        }
        else {
LAB_14adb73e5:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar16,4)
          ;
        }
        if (0 < (int)uVar17) {
          uVar24 = (ulonglong)uVar17;
          uVar23 = uVar13;
          do {
            FVar12.Data = local_50;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_48.Data;
            }
            uVar7 = uVar23 & (longlong)(int)uVar17 - 1U;
            uVar23 = uVar23 + 1;
            *(undefined4 *)(FVar12.Data + uVar7 * 4) = 0xffffffff;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      if (local_40 != 0) {
        FStack_190 = (FName)((longlong)local_88 + 0x10);
        local_198 = 0;
        uStack_194 = 1;
        uStack_184 = 0;
        uStack_180 = 0;
        if (local_60 != 0) {
          FVar25 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = local_68;
          }
          uVar16 = *(uint *)FVar25;
          uVar23 = uVar13;
          while (uVar16 == 0) {
            uStack_180 = (int)uVar23 + 0x20;
            uVar23 = (ulonglong)uStack_180;
            iVar18 = (int)uVar13;
            local_198 = iVar18 + 1;
            uVar13 = (ulonglong)local_198;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_198)
            goto LAB_14adb74eb;
            uVar16 = ((uint *)((longlong)FVar25 + 4))[iVar18];
          }
          uStack_194 = ~(uVar16 - 1) & uVar16;
          uVar13 = (ulonglong)uStack_194 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          local_174 = (int)lVar3;
          uStack_184 = local_174 + -1 + uStack_180;
          uVar13 = (ulonglong)uStack_184;
          if ((int)local_60 < (int)uStack_184) {
LAB_14adb74eb:
            uVar13 = (ulonglong)local_60;
            uStack_184 = local_60;
          }
        }
        local_188 = 0xffffffff;
        local_150 = (FName)local_88;
        local_138.B = uStack_184;
        local_138.A = 0xffffffff;
        local_138.D = uStack_17c;
        local_138.C = uStack_180;
        local_148.Value = local_198;
        uStack_144 = uStack_194;
        FStack_140 = FStack_190;
        if ((int)uVar13 < (int)local_60) {
          do {
            plVar19 = (longlong *)((longlong)(int)uVar13 * 0x60 + *(longlong *)local_150);
            uVar16 = (**(code **)(*plVar19 + 0x28))(plVar19);
            uVar16 = local_40 - 1 & uVar16;
            *(uint *)((longlong)plVar19 + 0x5c) = uVar16;
            FVar12.Data = local_50;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_48.Data;
            }
            uVar23 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
            *(undefined4 *)(plVar19 + 0xb) = *(undefined4 *)(FVar12.Data + uVar23 * 4);
            *(int *)(FVar12.Data + uVar23 * 4) = (int)uVar13;
            local_138.A = local_138.A & ~uStack_144;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)&local_148);
            uVar13 = (ulonglong)local_138.B;
          } while ((int)local_138.B < *(int *)((longlong)FStack_140 + 0x18));
        }
      }
    }
  }
  pFVar20 = FVar22.Data + lVar27 * 0x58;
  for (; FVar22.Data != pFVar20; FVar22.Data = FVar22.Data + 0x58) {
    TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::Frontend::FAnalyzerAddress_const_&>
              ((TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
                *)local_88,(FAnalyzerAddress *)local_170,(bool *)FVar22.Data);
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  uVar16 = (this->Analyzers).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    lVar27 = (longlong)(int)uVar16;
    do {
      uVar17 = 0;
      if ((int)uVar16 < (this->Analyzers).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar20 = (this->Analyzers).AllocatorInstance.Data;
      if (*(longlong *)(pFVar20 + lVar27 * 8) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Analyzer.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Analysis\\MetasoundFrontendGraphAnalyzer.cpp"
                           ,0x30,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = (FAnalyzerAddress *)(**(code **)(**(longlong **)(pFVar20 + lVar27 * 8) + 8))();
      uVar17 = (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8);
      if (local_88._8_4_ != local_54) {
        FVar22.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar22.Data = local_48.Data;
        }
        for (iVar18 = *(int *)(FVar22.Data + (ulonglong)(local_40 - 1 & uVar17) * 4); iVar18 != -1;
            iVar18 = *(int *)(local_88._0_8_ + (longlong)iVar18 * 0x60 + 0x58)) {
          bVar6 = FTransmissionAddress::operator==
                            ((FTransmissionAddress *)(local_88._0_8_ + (longlong)iVar18 * 0x60),
                             (FTransmissionAddress *)pFVar8);
          if (bVar6) {
            if (local_88._8_4_ != local_54) {
              uVar17 = (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8);
              TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
              ::RemoveImpl<Metasound::Frontend::FAnalyzerAddress>
                        ((TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
                          *)local_88,uVar17,pFVar8);
            }
            goto LAB_14adb7789;
          }
        }
      }
      uVar17 = 0;
      if ((int)uVar16 < (this->Analyzers).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      TArray<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtSwapImpl(&this->Analyzers,uVar16);
LAB_14adb7789:
      lVar27 = lVar27 + -1;
      uVar16 = uVar16 - 1;
      uVar26 = local_158;
      pFVar28 = (FGraphAnalyzer *)local_170._16_8_;
    } while (-1 < (int)uVar16);
  }
  uVar16 = local_60;
  uStack_11c = (uint)uVar26;
  uStack_120 = 0;
  uStack_10c = uStack_120;
  local_108 = uStack_120;
  if (local_60 != 0) {
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_68;
    }
    uVar17 = *(uint *)FVar25;
    local_108 = 0;
    uStack_120 = 0;
    while (uVar17 == 0) {
      lVar27 = (longlong)(int)uStack_120;
      local_108 = local_108 + 0x20;
      uStack_120 = uStack_120 + 1;
      uStack_10c = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_120)
      goto LAB_14adb7822;
      uVar17 = ((uint *)((longlong)FVar25 + 4))[lVar27];
    }
    uStack_11c = ~(uVar17 - 1) & uVar17;
    uVar13 = (ulonglong)uStack_11c * 2 + 1;
    lVar27 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_170._4_4_ = (undefined4)lVar27;
    uStack_10c = (local_108 - 1) + local_170._4_4_;
    if ((int)local_60 < (int)uStack_10c) {
      uStack_10c = local_60;
    }
  }
LAB_14adb7822:
  local_128 = (FName)local_88;
  uStack_104 = local_94;
  local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar17 = local_60 & 0xffffffe0;
  iStack_100 = local_88._8_4_ - local_54;
  uStack_110 = 0xffffffff;
  TStack_f0.CurrentBitIndex = uStack_10c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_11c,uStack_120);
  iVar18 = (int)local_60 >> 5;
  TStack_f0._28_4_ = local_94;
  TStack_f0.BaseBitIndex = local_108;
  uStack_d0 = CONCAT44(uStack_fc,iStack_100);
  bVar11 = (byte)local_60;
  local_f8 = local_128;
  TStack_f0.Array = local_118;
  if ((int)local_60 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (uVar16 != local_60) {
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_68;
    }
    uVar16 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      lVar27 = (longlong)iVar18;
      uVar17 = uVar17 + 0x20;
      iVar18 = iVar18 + 1;
      uVar16 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14adb7934;
      uVar16 = ((uint *)((longlong)FVar25 + 4))[lVar27];
    }
    uVar13 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_170._8_4_ = (undefined4)lVar27;
    uVar16 = (uVar17 - 1) + local_170._8_4_;
    if ((int)local_60 < (int)uVar16) {
      uVar16 = local_60;
    }
  }
LAB_14adb7934:
  while( true ) {
    FVar5 = local_f8;
    if (*(int *)((longlong)local_f8 + 8) - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<Metasound::Frontend::FAnalyzerAddress>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    if (((TStack_f0.CurrentBitIndex == uVar16) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (FVar5 == (FName)local_88)) break;
    lVar27 = (longlong)TStack_f0.CurrentBitIndex * 0x60 + *(longlong *)FVar5;
    uVar9 = CityHash64((char *)(lVar27 + 0x10),0x10);
    if (*(int *)&(pFVar28->InternalDataReferences).field_0x8 !=
        *(int *)&(pFVar28->InternalDataReferences).field_0x34) {
      puVar2 = *(undefined1 **)&(pFVar28->InternalDataReferences).field_0x40;
      puVar14 = &(pFVar28->InternalDataReferences).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar14 = puVar2;
      }
      iVar18 = *(int *)(puVar14 +
                       ((ulonglong)(*(int *)&(pFVar28->InternalDataReferences).field_0x48 - 1) &
                       uVar9 & 0xffffffff) * 4);
      if (iVar18 != -1) {
        do {
          piVar15 = (int *)((longlong)iVar18 * 0x68 + *(longlong *)&pFVar28->InternalDataReferences)
          ;
          if (((*(int *)(lVar27 + 0x1c) == piVar15[3] && *(int *)(lVar27 + 0x18) == piVar15[2]) &&
              *(int *)(lVar27 + 0x14) == piVar15[1]) && *(int *)(lVar27 + 0x10) == *piVar15) {
            this_02 = (FDataReferenceCollection *)(piVar15 + 4);
            if (piVar15 == (int *)0x0) {
              this_02 = (FDataReferenceCollection *)0x0;
            }
            if (this_02 != (FDataReferenceCollection *)0x0) {
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x9d4c) < ::_TSS0) {
                _Init_thread_header(&::_TSS0);
                if (::_TSS0 == -1) {
                  atexit(`Metasound::Frontend::IVertexAnalyzerRegistry::Get'::__l2::
                         _dynamic_atexit_destructor_for__Registry__);
                  _Init_thread_footer(&::_TSS0);
                }
              }
              plVar19 = (longlong *)
                        (**(code **)(::Registry._padding_ + 8))
                                  (&::Registry,*(undefined8 *)(lVar27 + 0x30));
              if (plVar19 != (longlong *)0x0) {
                pFVar10 = FDataReferenceCollection::FindDataReference
                                    (this_02,(FName *)(lVar27 + 0x20));
                if (pFVar10 != (FAnyDataReference *)0x0) {
                  local_c8 = lVar27;
                  local_c0 = pFVar28;
                  local_b8 = pFVar10;
                  (**(code **)(*plVar19 + 0x18))(plVar19,&local_1b0,&local_c8);
                  pFVar20 = (pFVar28->Analyzers).AllocatorInstance.Data;
                  if ((pFVar20 <= (FScriptContainerElement *)&local_1b0) &&
                     ((FScriptContainerElement *)&local_1b0 <
                      pFVar20 + (longlong)(pFVar28->Analyzers).ArrayMax * 8)) {
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar6) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  iVar18 = (pFVar28->Analyzers).ArrayNum;
                  piVar15 = &(pFVar28->Analyzers).ArrayMax;
                  if (iVar18 == *piVar15) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&(pFVar28->Analyzers).AllocatorInstance,piVar15);
                  }
                  (pFVar28->Analyzers).ArrayNum = iVar18 + 1;
                  *(undefined8 *)
                   ((pFVar28->Analyzers).AllocatorInstance.Data + (longlong)iVar18 * 8) = local_1b0;
                  local_1b0 = 0;
                }
              }
            }
            break;
          }
          iVar18 = piVar15[0x18];
        } while (iVar18 != -1);
      }
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  }
LAB_14adb7b6e:
  pFVar21 = (pFVar28->Analyzers).AllocatorInstance.Data;
  iVar18 = (pFVar28->Analyzers).ArrayNum;
  pFVar20 = pFVar21 + (longlong)iVar18 * 8;
  while( true ) {
    if ((pFVar28->Analyzers).ArrayNum != iVar18) {
      `TCheckedPointerIterator<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_1b7);
    }
    if (pFVar21 == pFVar20) break;
    (**(code **)(**(longlong **)pFVar21 + 0x20))();
    pFVar21 = pFVar21 + 8;
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<Metasound::Frontend::FAnalyzerAddress>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::Frontend::FAnalyzerAddress>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Metasound::Frontend::FAnalyzerAddress>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

