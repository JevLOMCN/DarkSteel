// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// Write<UE::FAssetLog> @ 141ed1230

void __cdecl UE::Logging::Private::FLogField::Write<UE::FAssetLog>(FCbWriter *param_1,void *param_2)

{
  FAssetLog::SerializeForLog(param_2,param_1);
  return;
}

// Write<FString> @ 141fbca10

void __cdecl UE::Logging::Private::FLogField::Write<FString>(FCbWriter *param_1,void *param_2)

{
  wchar_t *pwVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  long64 lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  pwVar1 = *(wchar_t **)param_2;
  iVar7 = *(int *)((longlong)param_2 + 8) + -1;
  if (*(int *)((longlong)param_2 + 8) == 0) {
    iVar7 = 0;
  }
  FCbWriter::BeginField(param_1);
  uVar4 = Core::Private::GetConvertedLength((uchar *)0x0,pwVar1,iVar7);
  iVar3 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar8 = 0;
  if (uVar4 != 0) {
    iVar8 = iVar3;
  }
  uVar6 = iVar8 / 7 + 1;
  lVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)(uVar6 + uVar4),(ForAnyElementType *)param_1,
                     &(param_1->Data).ArrayNum,&(param_1->Data).ArrayMax);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar3 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar8 = 0;
  if (uVar4 != 0) {
    iVar8 = iVar3;
  }
  iVar8 = iVar8 / 7;
  pFVar10 = pFVar2 + (ulonglong)(iVar8 + 1U) + lVar5 + -1;
  uVar9 = uVar4;
  if (iVar8 != 1) {
    if (iVar8 != 2) {
      if (iVar8 != 3) {
        if (iVar8 != 4) goto LAB_1419d5254;
        *pFVar10 = SUB41(uVar4,0);
        pFVar10 = pFVar10 + -1;
        uVar9 = uVar4 >> 8;
      }
      *pFVar10 = SUB41(uVar9,0);
      pFVar10 = pFVar10 + -1;
      uVar9 = uVar9 >> 8;
    }
    *pFVar10 = SUB41(uVar9,0);
    pFVar10 = pFVar10 + -1;
    uVar9 = uVar9 >> 8;
  }
  *pFVar10 = SUB41(uVar9,0);
  pFVar10 = pFVar10 + -1;
  uVar9 = uVar9 >> 8;
LAB_1419d5254:
  *pFVar10 = (FScriptContainerElement)(-1 << (9U - (char)(iVar8 + 1U) & 0x1f) | (byte)uVar9);
  if (uVar4 != 0) {
    Core::Private::Convert((uchar *)(pFVar2 + (ulonglong)uVar6 + lVar5),uVar4,pwVar1,iVar7);
  }
  FCbWriter::EndField(param_1,String);
  return;
}

// Write<TStringBuilderWithBuffer<wchar_t,256>_> @ 14215b560

void __cdecl
UE::Logging::Private::FLogField::Write<TStringBuilderWithBuffer<wchar_t,256>_>
          (FCbWriter *param_1,void *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = *(wchar_t **)param_2;
  local_18.Size = (int)(*(longlong *)((longlong)param_2 + 8) - (longlong)local_18.DataPtr >> 1);
  FCbWriter::AddString(param_1,&local_18);
  return;
}

