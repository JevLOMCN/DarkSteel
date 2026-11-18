// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 4

// FAppleARKitLiveLinkFileWriterCsv @ 14d282d30

FAppleARKitLiveLinkFileWriterCsv * __thiscall
FAppleARKitLiveLinkFileWriterCsv::FAppleARKitLiveLinkFileWriterCsv
          (FAppleARKitLiveLinkFileWriterCsv *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FAppleARKitLiveLinkFileWriterCsv *pFVar4;
  UEnum *this_00;
  ForAnyElementType FVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FName local_res8;
  FName local_res10;
  undefined1 local_res18 [16];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)this);
  this->_padding_ = (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__FSelfRegisteringExec__;
  this->_padding_ =
       (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__IARKitBlendShapePublisher__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  ::FString::FString((FString *)&this->_padding_,L".csv");
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UAppleARKitSettings::CreateFaceTrackingLogDir();
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  (this->CsvFrameHeader).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CsvFrameHeader).Data.ArrayNum = 0;
  (this->CsvFrameHeader).Data.ArrayMax = 0;
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAppleARKitLiveLinkFileWriterCsv *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::operator=(&this->CsvFrameHeader,L"Timecode, FrameRate");
  this_00 = StaticEnum<enum_EARFaceBlendShape>();
  if (this_00 != (UEnum *)0x0) {
    lVar6 = 0x3d;
    do {
      local_res8 = UEnum::GetNameByValue(this_00,(long64)local_res18);
      local_res8 = *(FName *)local_res8;
      ::FName::ToString(&local_res8,&local_68);
      iVar3 = local_68.Data.ArrayNum;
      iVar8 = iVar3 + -1;
      iVar7 = iVar3 + -0x14;
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
      if (iVar3 == 0) {
        iVar7 = -0x13;
        iVar8 = 0;
        FVar5.Data = (FScriptContainerElement *)L"";
      }
      iVar3 = iVar8;
      if (iVar7 < iVar8) {
        iVar3 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      ::FString::FString(&local_78,(wchar_t *)(FVar5.Data + ((longlong)iVar8 - (longlong)iVar7) * 2)
                        );
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar5.Data = local_78.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res10,(wchar_t *)FVar5.Data);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      ::FName::ToString(&local_res10,&local_48);
      ::FString::ConcatCF(&local_58,L", ",&local_48);
      iVar7 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                (&this->CsvFrameHeader,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  ::FString::AppendChars(&this->CsvFrameHeader,L"\r\n",2);
  return this;
}

// ~FAppleARKitLiveLinkFileWriterCsv @ 14d283fb0

void __thiscall
FAppleARKitLiveLinkFileWriterCsv::~FAppleARKitLiveLinkFileWriterCsv
          (FAppleARKitLiveLinkFileWriterCsv *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  pFVar1 = (this->CsvFrameHeader).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__FSelfRegisteringExec__;
  this->_padding_ =
       (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__IARKitBlendShapePublisher__;
  DestructItems<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int>
            ((FFaceTrackingFrame *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  return;
}

// BuildCsvRow @ 14d2856a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
FAppleARKitLiveLinkFileWriterCsv::BuildCsvRow
          (FAppleARKitLiveLinkFileWriterCsv *this,FString *__return_storage_ptr__,
          FFaceTrackingFrame *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  undefined1 *puVar6;
  char *pcVar7;
  uint uVar8;
  double dVar10;
  double dVar11;
  FFrameNumber local_res10 [2];
  FString local_48;
  float local_38;
  bool bStack_34;
  undefined3 uStack_33;
  FTimecode local_30;
  ulonglong uVar9;
  
  uVar9 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->FrameTime).Rate.Denominator;
  if (0 < iVar4) {
    local_res10[0].Value = (param_1->FrameTime).Time.FrameNumber.Value;
    dVar11 = (double)(param_1->FrameTime).Rate.Numerator / (double)iVar4;
    dVar10 = dVar11 - ___real_403df853e2556b29;
    if (((__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
        (dVar11 = dVar11 - ___real_404df853e2556b29,
        __real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (bVar3 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported(), !bVar3)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    FTimecode::FromFrameNumber(&local_30,local_res10,&(param_1->FrameTime).Rate,bVar3);
    local_38 = local_30.Subframe;
    bStack_34 = local_30.bDropFrameFormat;
    uStack_33 = local_30._21_3_;
    local_48.Data.AllocatorInstance.Data._4_4_ = local_30.Minutes;
    local_48.Data.AllocatorInstance.Data._0_4_ = local_30.Hours;
    local_48.Data.ArrayNum = local_30.Seconds;
    local_48.Data.ArrayMax = local_30.Frames;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%02d:%02d:%02d:%02.3f, %.3f");
  do {
    if (*(int *)&(param_1->BlendShapes).field_0x8 != *(int *)&(param_1->BlendShapes).field_0x34) {
      puVar1 = *(undefined1 **)&(param_1->BlendShapes).field_0x40;
      puVar6 = &(param_1->BlendShapes).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(param_1->BlendShapes).field_0x48 - 1) &
                                uVar9 & 0xff) * 4);
      if (iVar4 != -1) {
        do {
          pcVar7 = (char *)((longlong)iVar4 * 0x10 + *(longlong *)&param_1->BlendShapes);
          if (*pcVar7 == (char)uVar9) {
            if (pcVar7 != (char *)0x0) goto LAB_14d285864;
            break;
          }
          iVar4 = *(int *)(pcVar7 + 8);
        } while (iVar4 != -1);
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
LAB_14d285864:
    ::FString::PrintfImpl(&local_48,L", %.3f");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    if (0x3c < (int)uVar8) {
      ::FString::AppendChars(__return_storage_ptr__,L"\r\n",2);
      return __return_storage_ptr__;
    }
  } while( true );
}

// BuildSaveData @ 14d285c20

FString * __thiscall
FAppleARKitLiveLinkFileWriterCsv::BuildSaveData
          (FAppleARKitLiveLinkFileWriterCsv *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FFaceTrackingFrame *pFVar4;
  FFaceTrackingFrame *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,&this->CsvFrameHeader);
  iVar1 = (int)this->_padding_;
  pFVar4 = (FFaceTrackingFrame *)this->_padding_;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar3 = BuildCsvRow(this,&local_28,pFVar4);
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar6);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 1;
  }
  return __return_storage_ptr__;
}

