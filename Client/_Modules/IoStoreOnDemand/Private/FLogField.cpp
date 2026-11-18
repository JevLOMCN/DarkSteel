// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 4

// Write<TStringBuilderWithBuffer<char,256>_> @ 1445a1320

void __cdecl
UE::Logging::Private::FLogField::Write<TStringBuilderWithBuffer<char,256>_>
          (FCbWriter *param_1,void *param_2)

{
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = *(uchar **)param_2;
  local_18.Size = *(int *)((longlong)param_2 + 8) - (int)local_18.DataPtr;
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  return;
}

// Write<TStringBuilderWithBuffer<wchar_t,128>_> @ 1445a1360

void __cdecl
UE::Logging::Private::FLogField::Write<TStringBuilderWithBuffer<wchar_t,128>_>
          (FCbWriter *param_1,void *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = *(wchar_t **)param_2;
  local_18.Size = (int)(*(longlong *)((longlong)param_2 + 8) - (longlong)local_18.DataPtr >> 1);
  FCbWriter::AddString(param_1,&local_18);
  return;
}

// Write<UE::UnifiedError::FError> @ 1445a13a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Logging::Private::FLogField::Write<UE::UnifiedError::FError>(FCbWriter *param_1,void *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  FText *pFVar7;
  FText *pFVar8;
  size_t sVar9;
  FLogTemplate *pFVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStackY_578 [32];
  FLogTemplateOptions aFStack_548 [16];
  undefined1 auStack_538 [16];
  TStringView<char8_t> TStack_528;
  undefined1 auStack_518 [16];
  TStringBuilderBase<char8_t> TStack_508;
  FCbFieldViewIterator FStack_4e8;
  FText FStack_4d0;
  ITextData *apIStack_4c0 [2];
  longlong *plStack_4b0;
  undefined8 uStack_4a8;
  FLogTemplate aFStack_498 [3];
  FLogTemplate *pFStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  FCbWriter aFStack_458 [26];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_578;
  FCbWriter::BeginObject(param_1);
  TStack_528.Size = 5;
  auStack_538._0_8_ = "FError";
  auStack_538._8_4_ = 6;
  TStack_528.DataPtr = "$type";
  FCbWriter::SetName(param_1,&TStack_528);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)auStack_538);
  FCbWriter::FCbWriter(aFStack_458,0x400);
  plVar4 = *(longlong **)((longlong)param_2 + 8);
  if (*(longlong **)((longlong)param_2 + 8) != (longlong *)0x0) {
    do {
      plVar11 = plVar4;
      cVar5 = (**(code **)(*plVar11 + 0x58))(plVar11,1);
      if (cVar5 != '\0') {
        puVar6 = (undefined8 *)(**(code **)(*plVar11 + 0x48))(plVar11,&FStack_4e8);
        auStack_538._0_8_ = *puVar6;
        auStack_538._8_4_ = (int)puVar6[1];
        auStack_518._8_8_ = auStack_538._8_8_;
        auStack_518._0_8_ = auStack_538._0_8_;
        FCbWriter::SetName(aFStack_458,(TStringView<char8_t> *)auStack_518);
        (**(code **)(*plVar11 + 0x50))(plVar11,aFStack_458,param_2);
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar11 + 0x28))(plVar11,&TStack_528);
      plVar4 = (longlong *)*puVar6;
      if ((longlong *)TStack_528.DataPtr != (longlong *)0x0) {
        (**(code **)(*(longlong *)TStack_528.DataPtr + 0x10))();
      }
    } while (plVar4 != (longlong *)0x0);
    auStack_538._8_4_ = 4;
    auStack_538._0_8_ = "Root";
    auStack_518._0_8_ = "Root";
    auStack_518._8_8_ = auStack_538._8_8_;
    FCbWriter::SetName(aFStack_458,(TStringView<char8_t> *)auStack_518);
    (**(code **)(*plVar11 + 0x50))(plVar11,aFStack_458,param_2);
  }
  (**(code **)(**(longlong **)((longlong)param_2 + 8) + 0x20))
            (*(longlong **)((longlong)param_2 + 8),auStack_518,param_2);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&FStack_4e8,L"UnifiedError",L"DefaultLogPrepend",
                      L"{Root/ModuleIdString}.{Root/ErrorCodeString}");
  pFVar8 = FText::FromString((FText *)auStack_538,":");
  FText::Join<FText,FText>(&FStack_4d0,pFVar8,pFVar7,(FText *)auStack_518);
  if ((ITextData *)auStack_538._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)auStack_538._0_8_ + 0x10))();
  }
  TStack_528.DataPtr = (uchar *)aFStack_498;
  aFStack_548[0].bAllowSubObjectReferences = true;
  uStack_45c = 0x30;
  auStack_538._0_8_ =
       TFunctionWithContext<void_*___cdecl(int)>::
       Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
  ;
  auStack_538._8_8_ = &TStack_528;
  pFStack_468 = (FLogTemplate *)0x0;
  iVar12 = 0;
  uStack_460 = 0;
  CreateLocalizedLogTemplate
            (&FStack_4d0,aFStack_548,(FLogField *)0x0,0,
             (TFunctionWithContext<void_*___cdecl(int)> *)auStack_538);
  TStack_508.End = (uchar *)0x0;
  TStack_508.bIsDynamic = false;
  TStack_508.bIsExternal = false;
  TStack_508.Base = (uchar *)0x0;
  TStack_508.CurPos = (uchar *)0x0;
  FCbWriter::Save(aFStack_458,(FCbFieldIterator *)apIStack_4c0);
  FStack_4e8._16_8_ = uStack_4a8;
  FStack_4e8._0_8_ = apIStack_4c0[0];
  FStack_4e8._8_8_ = apIStack_4c0[1];
  pFVar10 = aFStack_498;
  if (pFStack_468 != (FLogTemplate *)0x0) {
    pFVar10 = pFStack_468;
  }
  FormatLogTo(&TStack_508,pFVar10,&FStack_4e8);
  if (TStack_508.End < TStack_508.CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(&TStack_508,1);
  }
  *TStack_508.CurPos = '\0';
  TStack_528.DataPtr = TStack_508.Base;
  if ((ITextData *)TStack_508.Base != (ITextData *)0x0) {
    sVar9 = strlen((char *)TStack_508.Base);
    iVar12 = (int)sVar9;
  }
  TStack_528.Size = iVar12;
  auStack_538._8_4_ = 5;
  auStack_538._0_8_ = "$text";
  auStack_518._0_8_ = "$text";
  auStack_518._8_8_ = auStack_538._8_8_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)auStack_518);
  auStack_518._0_8_ = TStack_528.DataPtr;
  auStack_518._8_8_ = TStack_528._8_8_;
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)auStack_518);
  FCbWriter::EndObject(param_1);
  if (plStack_4b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_4b0 + 3;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (((uint)lVar2 & 0x3fffffff) == 1) {
      (**(code **)(*plStack_4b0 + 0x10))(plStack_4b0);
      plStack_4b0[1] = 0;
      plStack_4b0[2] = 0;
      LOCK();
      puVar1 = (ulonglong *)(plStack_4b0 + 3);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plStack_4b0)(plStack_4b0,1);
      }
    }
  }
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&TStack_508);
  pFVar10 = aFStack_498;
  if (pFStack_468 != (FLogTemplate *)0x0) {
    pFVar10 = pFStack_468;
  }
  DestroyLogTemplate(pFVar10);
  if (pFStack_468 != (FLogTemplate *)0x0) {
    FMemory::Free(pFStack_468);
  }
  if (FStack_4d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_4d0.TextData.Reference + 0x10))();
  }
  FCbWriter::~FCbWriter(aFStack_458);
  return;
}

// Write<unsigned___int64> @ 1445a13b0

void __cdecl
UE::Logging::Private::FLogField::Write<unsigned___int64>(FCbWriter *param_1,void *param_2)

{
  FCbWriter::AddInteger(param_1,*(ulong64 *)param_2);
  return;
}

