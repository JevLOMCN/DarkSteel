// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// CountInnerStructInstances @ 142025190

void __thiscall
UE::GC::FInstanceStats::CountInnerStructInstances
          (FInstanceStats *this,uchar *param_1,
          TArrayView<UE::GC::FStructMemberStats_const_,int> *param_2)

{
  FStructMemberStats *pFVar1;
  code *pcVar2;
  bool bVar3;
  FStructMemberStats *this_00;
  <lambda_1> local_18;
  
  this_00 = param_2->DataPtr;
  pFVar1 = this_00 + param_2->ArrayNum;
  while( true ) {
    if (this_00 == pFVar1) {
      return;
    }
    if ((this_00->Stat == (FSchemaStats *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerStruct.Stat",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                           ,0x368,L""), bVar3)) break;
    local_18.__this = this;
    local_18.InnerStruct = this_00;
    FStructMemberStats::
    VisitInstances<_UE::GC::FInstanceStats::CountInnerStructInstances_::__l6::<lambda_1>_>
              (this_00,param_1,&local_18);
    this_00 = this_00 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// CountInstance @ 142025230

void __thiscall
UE::GC::FInstanceStats::CountInstance
          (FInstanceStats *this,uchar *param_1,uint param_2,FSchemaStats *param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FSchemaStats *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  
  pFVar9 = &this->Sum;
  if ((param_3->Counters + 0xf < pFVar9) || ((FSchemaStats *)((this->Sum).Counters + 0xf) < param_3)
     ) {
    uVar7 = (this->Sum).Counters[1];
    uVar8 = (this->Sum).Counters[2];
    uVar3 = (this->Sum).Counters[3];
    uVar4 = param_3->Counters[1];
    uVar5 = param_3->Counters[2];
    uVar6 = param_3->Counters[3];
    pFVar9->Counters[0] = param_3->Counters[0] + pFVar9->Counters[0];
    (this->Sum).Counters[1] = uVar4 + uVar7;
    (this->Sum).Counters[2] = uVar5 + uVar8;
    (this->Sum).Counters[3] = uVar6 + uVar3;
    uVar7 = (this->Sum).Counters[5];
    uVar8 = (this->Sum).Counters[6];
    uVar3 = (this->Sum).Counters[7];
    uVar4 = param_3->Counters[5];
    uVar5 = param_3->Counters[6];
    uVar6 = param_3->Counters[7];
    (this->Sum).Counters[4] = param_3->Counters[4] + (this->Sum).Counters[4];
    (this->Sum).Counters[5] = uVar4 + uVar7;
    (this->Sum).Counters[6] = uVar5 + uVar8;
    (this->Sum).Counters[7] = uVar6 + uVar3;
    uVar7 = (this->Sum).Counters[9];
    uVar8 = (this->Sum).Counters[10];
    uVar3 = (this->Sum).Counters[0xb];
    uVar4 = param_3->Counters[9];
    uVar5 = param_3->Counters[10];
    uVar6 = param_3->Counters[0xb];
    (this->Sum).Counters[8] = param_3->Counters[8] + (this->Sum).Counters[8];
    (this->Sum).Counters[9] = uVar4 + uVar7;
    (this->Sum).Counters[10] = uVar5 + uVar8;
    (this->Sum).Counters[0xb] = uVar6 + uVar3;
    uVar7 = (this->Sum).Counters[0xd];
    uVar8 = (this->Sum).Counters[0xe];
    uVar3 = (this->Sum).Counters[0xf];
    uVar4 = param_3->Counters[0xd];
    uVar5 = param_3->Counters[0xe];
    uVar6 = param_3->Counters[0xf];
    (this->Sum).Counters[0xc] = param_3->Counters[0xc] + (this->Sum).Counters[0xc];
    (this->Sum).Counters[0xd] = uVar4 + uVar7;
    (this->Sum).Counters[0xe] = uVar5 + uVar8;
    (this->Sum).Counters[0xf] = uVar6 + uVar3;
  }
  else {
    lVar13 = (longlong)param_3 - (longlong)pFVar9;
    lVar11 = 0x10;
    do {
      pFVar9->Counters[0] = pFVar9->Counters[0] + *(int *)((longlong)pFVar9 + lVar13);
      pFVar9 = (FSchemaStats *)(pFVar9->Counters + 1);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  lVar11 = 0x40;
  puVar12 = &(this->Sum).NumMembers;
  *puVar12 = *puVar12 + param_3->NumMembers;
  lVar13 = 2;
  puVar12 = &(this->Sum).NumExtraWords;
  *puVar12 = *puVar12 + param_3->NumExtraWords;
  uVar7 = 1;
  if (param_2 != 0) {
    uVar7 = param_2;
  }
  uVar1 = (ulonglong)(uVar7 - 1) * 2 + 1;
  lVar10 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  this->SizeBins[(uint)(param_2 != 0) + (int)lVar10] =
       this->SizeBins[(uint)(param_2 != 0) + (int)lVar10] + 1;
  uVar7 = param_3->NumMembers;
  uVar8 = 1;
  if (uVar7 != 0) {
    uVar8 = uVar7;
  }
  uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
  lVar10 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  this->NumMemberBins[(uint)(uVar7 != 0) + (int)lVar10] =
       this->NumMemberBins[(uint)(uVar7 != 0) + (int)lVar10] + 1;
  this->Num = this->Num + 1;
  puVar12 = param_3->Counters + 2;
  do {
    uVar7 = ((FSchemaStats *)(puVar12 + -2))->Counters[0];
    uVar8 = 1;
    if (uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    this->SizeBins[(ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11] =
         this->SizeBins[(ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11] + 1;
    uVar7 = puVar12[-1];
    uVar8 = 1;
    if (uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    this->NumMemberBins[(ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11] =
         this->NumMemberBins[(ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11] + 1;
    uVar7 = *puVar12;
    uVar8 = 1;
    if (uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    puVar2 = this->MemberBins[0] + (ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11;
    *puVar2 = *puVar2 + 1;
    uVar7 = puVar12[1];
    uVar8 = 1;
    if (uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    puVar2 = this->MemberBins[1] + (ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11;
    *puVar2 = *puVar2 + 1;
    uVar7 = puVar12[2];
    uVar8 = 1;
    if (uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    puVar2 = this->MemberBins[2] + (ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11;
    *puVar2 = *puVar2 + 1;
    uVar7 = puVar12[3];
    uVar8 = 1;
    if (uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    puVar2 = this->MemberBins[3] + (ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11;
    *puVar2 = *puVar2 + 1;
    uVar7 = puVar12[4];
    uVar8 = 1;
    if (uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    puVar2 = this->MemberBins[4] + (ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11;
    *puVar2 = *puVar2 + 1;
    uVar7 = puVar12[5];
    uVar8 = 1;
    if (uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    lVar10 = (ulonglong)((uint)(uVar7 != 0) + (int)lVar10) + lVar11;
    lVar11 = lVar11 + 0x100;
    puVar2 = this->MemberBins[5] + lVar10;
    *puVar2 = *puVar2 + 1;
    lVar13 = lVar13 + -1;
    puVar12 = puVar12 + 8;
  } while (lVar13 != 0);
  return;
}

