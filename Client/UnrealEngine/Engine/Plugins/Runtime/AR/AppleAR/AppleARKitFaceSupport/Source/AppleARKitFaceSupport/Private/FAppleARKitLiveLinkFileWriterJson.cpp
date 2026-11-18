// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 4

// FAppleARKitLiveLinkFileWriterJson @ 14d282f90

FAppleARKitLiveLinkFileWriterJson * __thiscall
FAppleARKitLiveLinkFileWriterJson::FAppleARKitLiveLinkFileWriterJson
          (FAppleARKitLiveLinkFileWriterJson *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FAppleARKitLiveLinkFileWriterJson *pFVar6;
  UEnum *this_00;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  longlong lVar10;
  FName local_res18;
  FName local_res20;
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)this);
  this->_padding_ = (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__FSelfRegisteringExec__;
  this->_padding_ =
       (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__IARKitBlendShapePublisher__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  ::FString::FString((FString *)&this->_padding_,L".json");
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UAppleARKitSettings::CreateFaceTrackingLogDir();
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  pTVar1 = &this->BlendShapeJsonKeyNames;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  (this->BlendShapeJsonKeyNames).ArrayNum = 0;
  (this->BlendShapeJsonKeyNames).ArrayMax = 0;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                         ,0x286,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FAppleARKitLiveLinkFileWriterJson *)(*pcVar2)();
    return pFVar6;
  }
  this_00 = StaticEnum<enum_EARFaceBlendShape>();
  if (this_00 == (UEnum *)0x0) {
    return this;
  }
  lVar10 = 0x3d;
  while( true ) {
    local_res18 = UEnum::GetNameByValue(this_00,(long64)local_88);
    local_res18 = *(FName *)local_res18;
    ::FName::ToString(&local_res18,local_60);
    iVar5 = (int)local_60[0].Data._8_8_;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (iVar5 != 0) {
      FVar7.Data = local_60[0].Data.AllocatorInstance.Data;
    }
    iVar9 = iVar5 + -1;
    iVar4 = iVar5 + -0x14;
    if (iVar5 == 0) {
      iVar9 = 0;
      iVar4 = -0x13;
    }
    iVar5 = iVar9;
    if (iVar4 < iVar9) {
      iVar5 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    ::FString::FString(&local_70,(wchar_t *)(FVar7.Data + ((longlong)iVar9 - (longlong)iVar4) * 2));
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar7.Data = local_70.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res20,(wchar_t *)FVar7.Data);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    ::FName::ToString(&local_res20,&local_80);
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar8 + (longlong)(this->BlendShapeJsonKeyNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar5 = (this->BlendShapeJsonKeyNames).ArrayNum;
    if (iVar5 == (this->BlendShapeJsonKeyNames).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,&(this->BlendShapeJsonKeyNames).ArrayMax);
    }
    FVar7.Data = local_80.Data.AllocatorInstance.Data;
    pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    (this->BlendShapeJsonKeyNames).ArrayNum = iVar5 + 1;
    *(undefined8 *)pFVar8 = 0;
    iVar5 = local_80.Data.ArrayNum;
    *(int *)(pFVar8 + 8) = iVar5;
    if (iVar5 == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)pFVar8,iVar5,(int *)(pFVar8 + 0xc));
      memcpy(*(void **)pFVar8,FVar7.Data,(longlong)iVar5 * 2);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      return this;
    }
  }
  pcVar2 = (code *)swi(3);
  pFVar6 = (FAppleARKitLiveLinkFileWriterJson *)(*pcVar2)();
  return pFVar6;
}

// ~FAppleARKitLiveLinkFileWriterJson @ 14d284040

void __thiscall
FAppleARKitLiveLinkFileWriterJson::~FAppleARKitLiveLinkFileWriterJson
          (FAppleARKitLiveLinkFileWriterJson *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  DestructItems<FString,int>
            ((FString *)(this->BlendShapeJsonKeyNames).AllocatorInstance.Data,
             (this->BlendShapeJsonKeyNames).ArrayNum);
  pFVar1 = (this->BlendShapeJsonKeyNames).AllocatorInstance.Data;
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

// BuildJsonRow @ 14d285900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
FAppleARKitLiveLinkFileWriterJson::BuildJsonRow
          (FAppleARKitLiveLinkFileWriterJson *this,FString *__return_storage_ptr__,
          FFaceTrackingFrame *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  undefined1 *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  FFrameNumber local_res10 [2];
  FString local_78;
  FString local_68;
  float local_58;
  bool bStack_54;
  undefined3 uStack_53;
  FTimecode local_50;
  
  uVar8 = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = (param_1->FrameTime).Rate.Denominator;
  if (0 < iVar9) {
    local_res10[0].Value = (param_1->FrameTime).Time.FrameNumber.Value;
    dVar11 = (double)(param_1->FrameTime).Rate.Numerator / (double)iVar9;
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
    FTimecode::FromFrameNumber(&local_50,local_res10,&(param_1->FrameTime).Rate,bVar3);
    local_58 = local_50.Subframe;
    bStack_54 = local_50.bDropFrameFormat;
    uStack_53 = local_50._21_3_;
    local_68.Data.AllocatorInstance.Data._4_4_ = local_50.Minutes;
    local_68.Data.AllocatorInstance.Data._0_4_ = local_50.Hours;
    local_68.Data.ArrayNum = local_50.Seconds;
    local_68.Data.ArrayMax = local_50.Frames;
  }
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"\t{\r\n\t\t\"TimeCode\" :\r\n\t\t{\r\n\t\t\t\"Hours\" : %d,\r\n\t\t\t\"Minutes\" : %d,\r\n\t\t\t\"Seconds\" : %d,\r\n\t\t\t\"Frames\" : %.3f\r\n\t\t},\r\n"
            );
  ::FString::PrintfImpl(&local_78,L"\t\t\"FrameRate\" : %.3f,\r\n");
  iVar9 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar9);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  do {
    if (*(int *)&(param_1->BlendShapes).field_0x8 != *(int *)&(param_1->BlendShapes).field_0x34) {
      puVar1 = *(undefined1 **)&(param_1->BlendShapes).field_0x40;
      puVar6 = &(param_1->BlendShapes).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      iVar9 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(param_1->BlendShapes).field_0x48 - 1) &
                                uVar8 & 0xff) * 4);
      if (iVar9 != -1) {
        do {
          pcVar7 = (char *)((longlong)iVar9 * 0x10 + *(longlong *)&param_1->BlendShapes);
          if (*pcVar7 == (char)uVar8) {
            if (pcVar7 != (char *)0x0) goto LAB_14d285b10;
            break;
          }
          iVar9 = *(int *)(pcVar7 + 8);
        } while (iVar9 != -1);
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
LAB_14d285b10:
    if (((this->BlendShapeJsonKeyNames).ArrayNum <= (int)uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::PrintfImpl(&local_68,L"\t\t\"%s\" : %.3f");
    iVar9 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar9);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar4 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar4;
    if (0x3c < (int)uVar4) {
      ::FString::AppendChars(__return_storage_ptr__,L"\r\n\t}",4);
      return __return_storage_ptr__;
    }
    ::FString::AppendChars(__return_storage_ptr__,L",\r\n",3);
  } while( true );
}

// BuildSaveData @ 14d285ce0

FString * __thiscall
FAppleARKitLiveLinkFileWriterJson::BuildSaveData
          (FAppleARKitLiveLinkFileWriterJson *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FString *pFVar4;
  FFaceTrackingFrame *pFVar5;
  int iVar6;
  FFaceTrackingFrame *pFVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendChars(__return_storage_ptr__,L"{\r\n",3);
  ::FString::AppendChars(__return_storage_ptr__,L"\t\"Frames\" : [\r\n",0xf);
  iVar1 = (int)this->_padding_;
  bVar3 = false;
  pFVar5 = (FFaceTrackingFrame *)this->_padding_;
  pFVar7 = pFVar5 + iVar1;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar7) break;
    if (bVar3) {
      ::FString::AppendChars(__return_storage_ptr__,L",\r\n",3);
    }
    pFVar4 = BuildJsonRow(this,&local_38,pFVar5);
    iVar2 = (pFVar4->Data).ArrayNum;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
    pFVar5 = pFVar5 + 1;
  }
  ::FString::AppendChars(__return_storage_ptr__,L"\t]\r\n",4);
  ::FString::AppendChars(__return_storage_ptr__,L"}\r\n",3);
  return __return_storage_ptr__;
}

